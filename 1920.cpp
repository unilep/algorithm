#include <iostream>
using namespace std;

int N, M, A[100001], T, B[100001];

void sort(int lo, int hi) {
	if (lo == hi) return;
	int mid = (lo + hi) / 2;
	sort(lo, mid);
	sort(mid + 1, hi);
	int i = lo, j = mid + 1, k = 0;
	while (i <= mid && j <= hi) {
		if (A[i] <= A[j]) B[k++] = A[i++];
		else B[k++] = A[j++];
	}
	while(i <= mid) B[k++] = A[i++];
	while(j <= hi) B[k++] = A[j++];
	for (int i = lo; i <= hi; i++) A[i] = B[i - lo];
}

int binarySearch(int value) {
	int lo = 0, hi = N - 1;
	while (lo <= hi) {
		int mid = (lo + hi) / 2;
		if (A[mid] == value) return 1;
		else if (A[mid] > value) hi = mid - 1;
		else lo = mid + 1;
	}
	return 0;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> A[i];
	}
	sort(0, N - 1);
	cin >> M;
	for (int i = 0; i < M; i++) {
		cin >> T;
		cout << binarySearch(T) << '\n';
	}
}