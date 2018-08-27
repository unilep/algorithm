#include<iostream>
#include<vector>>
using namespace std;

int N, A[101][11], ANS[11];
vector<int> v;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	for (int i = 0; i < 10; i++) {
		ANS[i] = i % 5 + 1;
	}

	cin >> N;
	for (int i = 0; i < N; i++) {
		bool ans = true;
		for (int j = 0; j < 10; j++) {
			cin >> A[i][j];
			if (A[i][j] != ANS[j]) ans = false;
		}
		if (ans) v.push_back(i + 1);
	}
	for (int k : v) {
		cout << k << '\n';
	}
}
