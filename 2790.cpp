#include<iostream>
#include<algorithm>
using namespace std;

int N, A[300001], MX, ans;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> A[i];
	}
	sort(A, A + N, [](int a, int b) -> bool { return a > b; });
	for (int i = 0; i < N; i++) {
		if (A[i] + N >= MX) ans++;
		MX = max(MX, A[i] + i + 1);
	}
	cout << ans;
}
