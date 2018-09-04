#include<iostream>
#include<vector>
#include<algorithm>
#include<cstring>
using namespace std;
const int MIN = -987654321;
int N, M, X, A[101], D[101][101];
bool ca[101][101];

int func(int x, int y) {
	if (!y) return 0;
	if (x <= 0) return MIN;

	int& ret = D[x][y];
	if (ca[x][y]) return ret;
	ca[x][y] = true;

	ret = func(x - 1, y);
	for (int i = 1; i <= x; i++) {
		ret = max(ret, func(i - 2, y - 1) + A[x] - A[i - 1]);
	}
	return ret;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cin >> N >> M;
	for (int i = 1; i <= N; i++) {
		cin >> X;
		A[i] = A[i - 1] + X;
	}
	cout << func(N, M);
	
	return 0;
}
