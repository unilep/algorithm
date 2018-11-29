#include <string>
#include <vector>
#include <iostream>
#include<queue>
using namespace std;

int N, A[101][101], X, Y, ans, K;
int dx[4] = { 1,-1,0,0 };
int dy[4] = { 0,0,1,-1 };
bool visit[101][101];

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cin >> N;
	while (N--) {
		cin >> X >> Y;
		int K = X + 10, P = Y + 10;
		for (int i = X; i < K; i++)
			for (int j = Y; j < P; j++)
				A[i][j] = 1;
	}
	for (int x = 1; x <= 100; x++) {
		for (int y = 1; y <= 100; y++) {
			if (!A[x][y]) continue;
			for (int i = 0; i < 4; i++) {
				int nx = x + dx[i];
				int ny = y + dy[i];
				if (A[nx][ny] == 0) ans++;
			}
		}
	}
	
	cout << ans;
}
