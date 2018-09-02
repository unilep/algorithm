#include <string>
#include <vector>
#include <iostream>

using namespace std;

int N, P, M, A[51], ans = 1;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cin >> N >> M >> P;
	for (int i = 0; i < N; i++) {
		cin >> A[i];
	}
	if (N >= P && A[N - 1] >= M) {
		cout << -1;
		return 0;
	}
	for (int i = 0; i < N; i++) {
		if (A[i] > M) ans++;
		else break;
	}
	cout << ans;
}
