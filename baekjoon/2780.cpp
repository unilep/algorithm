#include <string>
#include <vector>
#include <iostream>
#include<cstring>
#include<queue>
using namespace std;

int T, N, ans;
const int MOD = 1234567;
vector<int> A[10];
int D[10][1001];
int func(int x, int y, int end) {
	if (y == end) return 0;
	int& ret = D[x][y];
	if (ret != -1) return ret;
	for (int i = 0; i < A[x].size(); i++) {
		ret += (func(A[x][i], y + 1, end) + 1) % MOD;
	}
	ret = ret % MOD;
	return ret;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	A[0].push_back(7);
	A[1].push_back(2);
	A[1].push_back(4);
	A[2].push_back(1);
	A[2].push_back(3);
	A[2].push_back(5);
	A[3].push_back(2);
	A[3].push_back(6);
	A[4].push_back(1);
	A[4].push_back(5);
	A[4].push_back(7);
	A[5].push_back(2);
	A[5].push_back(4);
	A[5].push_back(6);
	A[5].push_back(8);
	A[6].push_back(3);
	A[6].push_back(5);
	A[6].push_back(9);
	A[7].push_back(4);
	A[7].push_back(8);
	A[7].push_back(0);
	A[8].push_back(5);
	A[8].push_back(7);
	A[8].push_back(9);
	A[9].push_back(6);
	A[9].push_back(8);

	cin >> T;
	while (T--) {
		memset(D, -1, sizeof(D));
		ans = 0;
		cin >> N;
		if (N == 1) {
			cout << 10<<'\n';
			continue;
		}
		for (int i = 0; i < 10; i++) {
			ans += func(i, 1, N);
			ans %= MOD;
		}
		cout << (ans + 10) % MOD << '\n';
	}
}
