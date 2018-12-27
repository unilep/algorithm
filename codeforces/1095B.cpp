#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<cstring>
using namespace std;

int N, A[100001];
const int INF = 987654321;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cin >> N;
	for(int i=0; i<N; i++) {
		cin >> A[i];
	}
	if(N == 2) {
		cout << 0;
		return 0;
	}
	sort(A, A+N);
	cout << min(A[N-1] - A[1], A[N-2] - A[0]);
}
