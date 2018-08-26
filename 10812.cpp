#include<iostream>
using namespace std;

int N, M, A[101], B[101];

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cin >> N >> M;
	for (int i = 1; i <= N; i++) B[i] = A[i] = i;
	while (M--) {
		int I, J, K;
		cin >> I >> J >> K;
		int L = J - K + 1;
		int C = J - I + 1;
		for (int i = 0; i < C; i++) B[I + i] = (i >= L ? A[I + i - L] : A[K + i]);
		for (int i = 1; i <= N; i++) A[i] = B[i];
	}
	for (int i = 1; i <= N; i++) cout << A[i] << " ";
}
