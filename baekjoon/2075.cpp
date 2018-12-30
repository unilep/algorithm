#include <bits/stdc++.h>
// cmd opt c - compile
// cmd opt r - execute
using namespace std;
int N, x;
priority_queue<int> q;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cin >> N;
	for(int i=0; i<N; i++) {
		for(int j=0; j<N; j++) {
			int x;
			cin >> x;
			q.push(-x);
			if(q.size() > N) {
				q.pop();
			}
		}
	}
	cout << -q.top();
	
	return 0;
}
