#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int T, N;
ll A[10], B[10];
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cin >> T;
	while(T--) {
		cin >> N;
		ll sum = 0l;
		for(int i=0; i<6; i++) {
			cin >> A[i];
			sum += A[i];
		}
		if(sum > N) {
			cout << 1 << '\n';
			continue;
		}
		ll ans = 2l;
		while(true) {
			sum = 0l;
			for(int i=0; i<6; i++) {
				B[i] = (ll) A[i] + A[(i+5) % 6] + A[(i+1) % 6] + A[(i+3) % 6]; 
				sum += B[i];
			}
			if(sum > N) break;
			for(int i=0; i<6; i++) {
				A[i] = B[i];
			}
			ans++;
		}
		cout << ans << '\n';
	}
}
