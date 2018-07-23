#include <iostream>
#include<cstring>
using namespace std;

int N, ans = 1, x;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cin >> N;
	while (N--) {
		cin >> x;
		ans += (x - 1);
	}
	cout << ans;
}