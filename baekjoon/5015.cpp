#include<iostream>
#include<string>
#include<algorithm>
#include<cstring>
#include<vector>
#include<functional>
using namespace std;

string P, T;
int N, dp[101][101];

int func(int P_idx, int T_idx) {
	if (P_idx == P.length() && T_idx == T.length()) {
		return 1;
	}
	
	int& ret = dp[P_idx][T_idx];
	if (ret != -1) return ret;
	ret = 0;
	char p = P[P_idx];
	if (p == '*') {
		for (int i = T_idx; i <= T.length(); i++) {
			ret += func(P_idx + 1, i);
		}
	}
	else {
		if (p == T[T_idx]) ret += func(P_idx + 1, T_idx + 1);
	}
	return ret;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cin >> P >> N;
	while (N--) {
		cin >> T;
		memset(dp, -1, sizeof(dp));
		if(func(0, 0)) cout << T << '\n';
	}
}
