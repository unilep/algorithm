#include <iostream>
using namespace std;

int N, t = -1, t2, ans;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cin >> N;
	t2 = N;
	while (t != N) {
		int a = t2 / 10;
		int b = t2 % 10;
		int c = (a + b) % 10;
		t2 = t = b * 10 + c;
		ans++;
	}
	cout << ans;
}