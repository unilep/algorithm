#include<iostream>
#include<algorithm>
#include<vector>
#include<queue>
#include<string>
#include<functional>
using namespace std;

string N;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	while (true) {
		cin >> N;
		if (N == "0") break;
		while (N.length() != 1) {
			int ans = 0;
			for (int i = 0; i < N.length(); i++) {
				int c = N[i] - '0';
				ans += c;
			}
			N = to_string(ans);
		}
		cout << N << '\n';
	}
}
