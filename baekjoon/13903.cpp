#include <bits/stdc++.h>
using namespace std;
int N, M, A[1001][1001], C, DX[11], DY[11];
bool visit[1001][1001];
struct node {
	int x;
	int y;
	int cnt;
};
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cin >> N >> M;
	for(int i=0; i<N; i++) {
		for(int j=0; j<M; j++) {
			cin >> A[i][j];
		}
	}
	cin >> C;
	for(int i=0; i<C; i++) {
		cin >> DX[i] >> DY[i];
	}
	queue<node> q;
	for(int i=0; i<M; i++) {
		if(A[0][i] == 1) {
			q.push({0, i, 0});
			visit[0][i] = true;
		}
	}
	while(!q.empty()) {
		int sz = q.size();
		for(int i=0; i<sz; i++) {
			node n = q.front();
			int x = n.x;
			int y = n.y;
			int cnt = n.cnt;
			q.pop();
			if(x == N-1) {
				cout << cnt;
				return 0;
			}
			for(int j=0; j<C; j++) {
				int nx = x + DX[j];
				int ny = y + DY[j];
				if(nx < 0 || ny < 0 || nx >= N || ny >= M || visit[nx][ny] || !A[nx][ny]) continue; 
				q.push({nx, ny, cnt + 1});
				visit[nx][ny] = true;
			}
		}
	}
	cout << -1;
}
