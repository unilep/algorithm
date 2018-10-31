#include<iostream>
#include<algorithm>
#include<vector>
#include<cstring>
#include<queue>
#include<functional>
using namespace std;

int N, K, ans = 987654321, ansc;
bool visit[100001];
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cin >> N >> K;
	queue<int> q;
	q.push(N);
	int cnt = -1;
	while (!q.empty()) {
		int sz = q.size();
		cnt++;
		if (ans <= cnt) break;
		for (int i = 0; i < sz; i++) {
			int k = q.front();
			q.pop();
			visit[k] = true;
			if (k == K) {
				if (ans > cnt) {
					ans = cnt;
					ansc = 1;
				}
				else if (ans == cnt) {
					ansc++;
				}
				continue;
			}
			if (k - 1 >= 0 && !visit[k-1]) {
				q.push(k - 1);
			}
			if (k + 1 <= 100000 && !visit[k+1]) {
				q.push(k + 1);
			}
			if (k * 2 <= 100000&&!visit[k*2]) {
				q.push(k * 2);
			}
		}
	}
	cout << ans << '\n' << ansc;
	return 0;
}
