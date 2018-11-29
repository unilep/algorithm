#include<iostream>
#include<queue>
#include<algorithm>
#pragma warning(disable:4996)
using namespace std;

int N, M, D[1001][1001][2], ans = 987654321;;
char A[1001][1001];
bool visit[1001][1001][2];
int dx[4] = { 1, -1, 0, 0 };
int dy[4] = { 0, 0, 1, -1 };

struct Node { int x; int y; int c; };

queue<Node> q;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cin >> N >> M;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			cin >> A[i][j];
			D[i][j][1] = D[i][j][0] = 987654321;
		}
	}
	
	q.push({ 0, 0, 1 });
	visit[0][0][1] = true;
	D[0][0][1] = 1;
	D[0][0][0] = 1;
	while (!q.empty()) {
		Node node = q.front();
		int x = node.x;
		int y = node.y;
		int c = node.c;
		q.pop();
		if (x == N - 1 && y == M - 1) {
			ans = min(ans, D[N - 1][M - 1][c]);
			break;
		}
		
		for (int i = 0; i < 4; i++) {
			int nx = x + dx[i];
			int ny = y + dy[i];
			if (nx < 0 || ny < 0 || nx >= N || ny >= M) continue;
			if (A[nx][ny] == '1') {
				if (c != 1 || visit[nx][ny][0]) continue;
				q.push({ nx, ny, 0 });
				visit[nx][ny][0] = true;
				D[nx][ny][0] = min(D[nx][ny][0], D[x][y][c] + 1);
			}
			else {
				if (visit[nx][ny][c]) continue;
				q.push({ nx, ny, c });
				visit[nx][ny][c] = true;
				D[nx][ny][c] = min(D[nx][ny][c], D[x][y][c] + 1);
			}
			
		}
	}
	cout << (ans == 987654321 ? -1 : ans);
}
