#include<iostream>
#include<algorithm>
using namespace std;

int A[7], ans;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	for (int i = 1; i <= 6; i++) cin >> A[i];
	ans += A[6];

	ans += A[5];
	A[1] -= A[5] * 11;
	A[5] = 0;
	if (A[1] < 0) A[1] = 0;

	while (A[4]) {
		ans++;
		A[4]--;
		if (A[2] >= 5) {
			A[2] -= 5;
		}
		else {
			int count = A[2];
			A[2] = 0;
			count = (5 - count) * 4;
			A[1] -= count;
			if (A[1] < 0) A[1] = 0;
		}
	}
	while (A[3]) {
		ans++;
		if (A[3] >= 4) {
			A[3] -= 4;
			continue;
		}
		int thr = A[3];
		int twoCount = 0;
		int oneCount = 0;
		A[3] = 0;
		int maxTwo = 5;
		if (thr == 1) {
			twoCount = 5;
		}
		else if (thr == 2) {
			twoCount = 3;
		}
		else if (thr == 3) {
			twoCount = 1;
		}
		if (A[2] < twoCount) twoCount = A[2];
		oneCount = 36 - (thr * 9 + twoCount * 4);
		if (A[2]) A[2] -= twoCount;
		if (A[2] < 0) A[2] = 0;
		if (A[1]) A[1] -= oneCount;
		if (A[1] < 0) A[1] = 0;
	}
	while (A[2]) {
		ans++;
		if (A[2] >= 9) {
			A[2] -= 9;
			continue;
		}
		int count = 36 - (A[2] * 4);
		A[2] = 0;
		A[1] -= count;
		if (A[1] < 0) A[1] = 0;
	}
	while (A[1]) {
		ans++;
		A[1] -= 36;
		if (A[1] < 0) A[1] = 0;
	}
	cout << ans;
}
