#include<iostream>
using namespace std;

int N, A[51];
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> A[i];
	}
	if (N == 1) {
		cout << "A";
		return 0;
	}
	else if (N == 2) {
		if (A[0] == A[1]) cout << A[0];
		else cout << "A";
		return 0;
	}
	int a = (A[0] == A[1] ? 0 : (A[2] - A[1]) / (A[1] - A[0]));
	int b = A[1] - A[0] * a;
	for (int i = 2; i < N; i++) {
		if (A[i - 1] * a + b != A[i]) {
			cout << "B";
			return 0;
		}
	}
	cout << A[N - 1] * a + b;
}
