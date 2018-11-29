#include<iostream>
#include<algorithm>
using namespace std;

int N, M, A[201][201], P[201];
bool ans = true;

int Find(int x) {
	if (x == P[x]) return x;
	return P[x] = Find(P[x]);
}

void Merge(int x, int y) {
	P[Find(y)] = Find(x);
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cin >> N >> M;
	for (int i = 1; i <= N; i++) {
		P[i] = i;
	}
	for (int i = 1; i <= N; i++) {
		for (int j = 1; j <= N; j++) {
			int X;
			cin >> X;
			if (X && i != j) Merge(i, j);
		}
	}
	int K, C;
	cin >> K;
	for (int i = 1; i < M; i++) {
		cin >> C;
		if (Find(P[K]) != Find(P[C])) ans = false;
		K = C;
	}
	cout << (ans ? "YES" : "NO");

}
