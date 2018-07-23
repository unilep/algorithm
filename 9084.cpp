#include <iostream>
#include<cstring>
using namespace std;

int T, N, M, coin[21], D[10001];

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cin >> T;
	while (T--) {
		memset(D, 0, sizeof(D));
		cin >> N;
		for (int i = 0; i < N; i++) {
			cin >> coin[i];
		}
		cin >> M;
		D[0] = 1;
		for (int i = 0; i < N; i++) {
			for (int j = coin[i]; j <= M; j++) {
				D[j] += D[j - coin[i]];
			}
		}
		cout << D[M] << '\n';
	}
}