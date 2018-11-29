#include<iostream>
#include<string>
#include<algorithm>
#include<cstring>
#include<vector>
#include<functional>
#include<queue>
using namespace std;

int N, X;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	
	while (cin >> N) {
		vector<int> V;
		V.push_back(-1);
		for (int i = 0; i < N; i++) {
			cin >> X;
			if (V.back() < X) {
				V.push_back(X);
				continue;
			}
			int lo = 0, hi = V.size() - 1, idx = -1;
			while (lo <= hi) {
				long long mid = (long long) (0l + lo + hi) / 2;
				if (X <= V[mid]) {
					hi = mid - 1;
					idx = mid;
				}
				else {
					lo = mid + 1;
				}
			}
			V[idx] = X;
		}
		cout << V.size() - 1<< '\n';
	}
}
