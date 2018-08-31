#include<iostream>
#include <string>
#include <vector>
using namespace std;

int N, A[5001], ans, D[5001], B[100001];

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cin >> N;
	for (int i = 0; i < N; i++) {
		int which, color;
		cin >> which >> color;
		B[i] = which;
		A[i] = color;
	}
	for (int i = 0; i < N; i++) {
		int i_color = A[i];
		for (int j = 0; j < N; j++) {
			if (i == j) continue;
			int j_color = A[j];
			if (i_color != j_color) continue;
			int k = abs(B[i] - B[j]);
			if (!D[i] || D[i] > k) D[i] = k;
		}
	}
	for (int i = 0; i < N; i++) {
		ans += D[i];
	}
	cout << ans;
}
