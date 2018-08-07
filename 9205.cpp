#include<iostream>
#include<vector>
#include<queue>
using namespace std;

int T, N, startX, startY, A[101][2], endX, endY;
bool ans = false;

int abs(int x) {
	return x >= 0 ? x : -x;
}

int getDist(int x1, int x2, int y1, int y2) {
	return abs(x1 - x2) + abs(y1 - y2);
}

queue<int> q;
bool visit[101];

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	cin >> T;
	while (T--) {
		while (!q.empty()) q.pop();
		ans = false;
		cin >> N;
		int last = N + 2;
		for (int i = 0; i < last; i++) {
			cin >> A[i][0] >> A[i][1];
			visit[i] = false;
		}
		
		q.push(0);
		visit[0] = true;
		while (!q.empty()) {
			int cur = q.front();
			q.pop();
			if (A[cur][0] == A[last - 1][0] && A[cur][1] == A[last - 1][1]) {
				ans = true;
				break;
			}
			for (int i = 1; i < last; i++) {
				if (visit[i]) continue;
				int dist = getDist(A[cur][0], A[i][0], A[cur][1], A[i][1]);
				if (dist > 1000) continue;
				q.push(i);
				visit[i] = true;
			}
		}
		cout << (ans ? "happy" : "sad") << '\n';
	}
	return 0;
}
