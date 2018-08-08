#include<iostream>
#include<vector>
#include<queue>
using namespace std;

int N, L, X;

struct Node {
	int value;
	int idx;
};

deque<Node> dq;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	cin >> N >> L;
	for (int i = 0; i < N; i++) {
		cin >> X;
		if (!dq.empty() && i - dq.front().idx >= L) {
			dq.pop_front();
		}
		while (!dq.empty() && dq.back().value >= X) {
			dq.pop_back();
		}

		dq.push_back({ X, i });

		cout << dq.front().value << ' ';
	}
	
	return 0;
}
