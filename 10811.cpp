#include<iostream>
#include<vector>>
using namespace std;

int N, M, A[101], X, Y;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	cin >> N >> M;
	for (int i = 1; i <= N; i++) A[i] = i;
	while (M--) {
		cin >> X >> Y;
		int L = (Y - X + 1) / 2;
		for (int i = 0; i < L; i++) {
			int temp = A[X + i];
			A[X + i] = A[Y - i];
			A[Y - i] = temp;
		}
	}
	for (int i = 1; i <= N; i++) cout << A[i] << " ";
}
