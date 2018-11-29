#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<functional>
using namespace std;

int ans;
string N, M;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	getline(cin, N);
	getline(cin, M);
	for (int i = 0; i < N.length(); i++) {
		const string& Temp = N.substr(i, M.length());
		if (M == Temp) {
			ans++;
			i += M.length() - 1;
		}
	}
	cout << ans;
}
