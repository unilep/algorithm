#include <iostream>
using namespace std;

int A, B, C, cnt[11];

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cin >> A >> B >> C;
	A = A * B * C;
	while (A) {
		cnt[A % 10]++;
		A /= 10;
	}
	for (int i = 0; i < 10; i++) cout << cnt[i] << '\n';
}