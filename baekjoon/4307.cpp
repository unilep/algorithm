#include <iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<queue>
using namespace std;
int T, N, L;
int main() {
    ios_base::sync_with_stdio(false);
	cin.tie(0);
	cin >> T;
	while(T--) {
		cin >> L >> N;
		int mx = 0, mn = 0;
		while(N--) {
			int X;
			cin >> X;
			int p = max(L - X, X);
			int q = L - p;
			mx = max(p, mx);
			mn = max(q, mn);
		}
		cout << mn << " " << mx << '\n';
	}
}
