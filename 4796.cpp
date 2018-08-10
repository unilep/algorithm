#include<iostream>
#include<algorithm>
using namespace std;

int L, P, V, T;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	while (true) {
		cin >> L >> P >> V;
		if (!L && !P && !V) break;
		int ans = V / P * L;
		if (V % P > 0) {
			ans += min(V%P, L);
		}
		cout << "Case " << ++T << ": " << ans << '\n';
	}
}
