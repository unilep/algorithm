#include <string>
#include <vector>
#include<iostream>
#include<queue>
#include<set>
#include<algorithm>
#include<cstring>
using namespace std;

int N, A[1001], C[1001][1001], D[1001];

int func(int s) {
	int& ret = D[s];
	if(ret != -1) return ret;
	ret = 0;
	for(int i=0; i<s; i++) {
		ret = max(ret, func(i) + C[i+1][s]);
	}
	return ret;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cin >> N;
	for(int i=1; i<=N; i++) {
		cin >> A[i];
	}
	for(int i=1; i<=N; i++) {
		int mx = 0;
		int mn = 10000;
		for(int j=i; j<=N; j++) {
			if(mx < A[j]) mx = A[j];
			if(mn > A[j]) mn = A[j];
			C[i][j] = mx - mn;
		}
	}
	memset(D, -1, sizeof(D));
	cout << func(N);
}
