#include <string>
#include <queue>
#include<algorithm>
#include<iostream>
using namespace std;
typedef long long ll;
int T, N, ans;
ll A, B;

ll Pow(int A, int B) {
	if (B == 0) return 1l;
	if (B == 1) return A;
	if (B & 1) return A * Pow(A, B - 1);
	ll K = Pow(A, B / 2);
	return K * K;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cin >> T;
	while (T--) {
		ans = 0;
		cin >> N >> A >> B;
		A = min(A, B);
		ll P = Pow(2, N);
		while (P > A || A % P != 0) {
			P /= 2;
			ans++;
		}
		cout << ans << '\n';
	}
}
