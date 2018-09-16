#include <string>
#include <vector>
#include<iostream>
#include<queue>
#include<set>
#include<algorithm>
using namespace std;

int N;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cin >> N;
	priority_queue<int> q;
	while (N--) {
		int x;
		cin >> x;
		if (x == 0) {
			if (q.size() == 0) cout << 0 << '\n';
			else {
				cout << q.top() << '\n';
				q.pop();
			}
		}
		else {
			q.push(x);
		}
	}
}
