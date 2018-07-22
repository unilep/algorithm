#include <iostream>
using namespace std;

int N, M, map[501][501], dp[501][501];
int dx[4] = { 0, 0, 1, -1 };
int dy[4] = { 1, -1, 0, 0 };

int func(int x, int y) {
	if (x == N - 1 && y == M - 1) return 1;
	int& ret = dp[x][y];
	if (ret != -1) return ret;
	ret = 0;
	for (int i = 0; i < 4; i++) {
		int nx = x + dx[i];
		int ny = y + dy[i];
		if (nx < 0 || ny < 0 || nx >= N || ny >= M) continue;
		if (map[x][y] <= map[nx][ny]) continue;
		ret += func(nx, ny);
	}
	return ret;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cin >> N >> M;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			cin >> map[i][j];
			dp[i][j] = -1;
		}
	}
	cout << func(0, 0);
}