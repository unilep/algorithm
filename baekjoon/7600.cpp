#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<functional>
using namespace std;

string s;

bool isAlphabet(char c) {
	return (c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z');
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	while (true) {
		int ans = 0;
		bool B[26] = { false, };
		getline(cin, s);
		if (s == "#") break;
		int len = s.length();
		for (int i = 0; i < len; i++) {
			if (isAlphabet(s[i])) {
				if (s[i] <= 'Z') {
					if (B[s[i] - 'A']) continue;
					B[s[i] - 'A'] = true;
					ans++;
				}
				else {
					if (B[s[i] - 'a']) continue;
					B[s[i] - 'a'] = true;
					ans++;
				}
			}
		}
		cout << ans << '\n';
	}
}
