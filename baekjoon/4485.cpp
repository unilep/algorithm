#include<iostream>
#include<algorithm>
#include<vector>
#include<queue>
#include<string>
#include<functional>
using namespace std;

int N, A[130][130], D[130][130], T;
int dx[4] = { 1,-1,0,0 };
int dy[4] = { 0,0,1,-1 };
bool visit[130][130];
const int INF = 987654321;

struct Node {
	int cost;
	int x;
	int y;
	bool operator<(const Node& node) const {
		return cost > node.cost;
	}
};

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	while (true) {
		cin >> N;
		if (N == 0) break;
		for (int i = 0; i < N; i++) {
			for (int j = 0; j < N; j++) {
				cin >> A[i][j];
				D[i][j] = INF;
			}
		}
		priority_queue<Node> q;
		D[0][0] = A[0][0];
		q.push({ D[0][0],0,0 });
		while (!q.empty()) {
			Node node = q.top();
			int cost = node.cost;
			int x = node.x;
			int y = node.y;
			q.pop();
			if (cost > D[x][y]) continue;
			for (int i = 0; i < 4; i++) {
				int nx = x + dx[i];
				int ny = y + dy[i];
				if (nx < 0 || ny < 0 || nx >= N || ny >= N) continue;
				if (D[nx][ny] > cost + A[nx][ny]) {
					D[nx][ny] = cost + A[nx][ny];
					q.push({ D[nx][ny],nx,ny });
				}
			}
		}

		cout<< "Problem " << ++T << ": " << D[N-1][N-1] << '\n';
	}
}
