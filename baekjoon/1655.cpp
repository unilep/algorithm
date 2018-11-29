#include<iostream>
#include<functional>
#include<queue>
using namespace std;

int N, X;

priority_queue<int> minq, maxq;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	cin >> N;
	while (N--) {
		cin >> X;
		if (maxq.size() == minq.size()) {
			maxq.push(X);
		}
		else {
			minq.push(-X);
		}
		if (!maxq.empty() && !minq.empty()) {
			int mx = maxq.top();
			int mn = -minq.top();
			if (mx > mn) {
				maxq.pop();
				minq.pop();
				minq.push(-mx);
				maxq.push(mn);
			}
		}
		
		cout << maxq.top() << '\n';
	}
	
	return 0;
}
