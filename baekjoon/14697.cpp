#include<iostream>
#include<algorithm>
#include<vector>
#include<queue>
#include<string>
#include<functional>
using namespace std;

int A, B, C, N, MN;
bool visit[301], ans;
void func(int a, int b, int c, int n) {
	visit[n] = true;
	if (ans) return;
	if (n == 0) {
		ans = true;
		return;
	}
	if (a <= n && !visit[n - a]) func(a, b, c, n - a);
	if (b <= n && !visit[n - b]) func(a, b, c, n - b);
	if (c <= n && !visit[n - c]) func(a, b, c, n - c);
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cin >> A >> B >> C >> N;
	MN = min({ A,B,C });
	func(A, B, C, N);
	cout << (ans == 1 ? 1 : 0);
}
