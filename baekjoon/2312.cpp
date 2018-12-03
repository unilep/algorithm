#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;
int T, N;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cin >> T;
	while(T--){
		cin >> N;
		for(int i=2; i<=N; i++) {
			int cnt = 0;
			while(N % i == 0) {
				cnt++;
				N /= i;
			}
			if(cnt) {
				cout << i << " " << cnt << '\n';
			}
		}
	}
}
