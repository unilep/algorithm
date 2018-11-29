#include<iostream>
#include<vector>
#include<functional>
#include<queue>
#include<string>
using namespace std;

int N, X, Y, K, ans, D[100001], C;
struct Node {
	int to;
	int cost;
};
vector<Node> A[100001];
bool visit[100001];

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cin >> N >> X >> Y;
	if (N == 1 || X == Y) {
		cout << 0;
		return 0;
	}
	for (int i = 1; i < N; i++) {
		int from, to, cost;
		cin >> from >> to >> cost;
		A[from].push_back({ to, cost });
		A[to].push_back({ from, cost });
	}

	queue<Node> q;
	q.push({ X, 0 });
	visit[X] = true;
	
	while (!q.empty()) {
		Node node = q.front();
		int to = node.to;
		int cost = node.cost;
		q.pop();
		if (to == Y) {
			K = cost;
			break;
		}
		for (Node next : A[to]) {
			if (visit[next.to]) continue;
			q.push({ next.to, cost + next.cost });
			visit[next.to] = true;
			D[next.to] = to;
		}
	}
	
	while (D[Y] != 0) {
		int cur = Y;
		int pre = D[cur];
		for (Node next : A[cur]) {
			if (next.to != pre) continue;
			if (next.cost > C) C = next.cost;
		}
		Y = D[Y];
	}

	cout << K - C;
}
