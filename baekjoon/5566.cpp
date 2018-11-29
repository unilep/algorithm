#include<iostream>
using namespace std;

int N, M, A[1001], B[1001], ans;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cin >> N >> M;
	for (int i = 1; i <= N; i++) {
		cin >> A[i];
	}
	for (int i = 0; i < M; i++) {
		cin >> B[i];
	}
	int C = 1, Bi = 0;
	while (C < N) {
		ans++;
		C += B[Bi++];
		if (C >= N) break;
		C += A[C];
	}
	cout << ans;
}
