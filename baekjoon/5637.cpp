#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
using namespace std;
string str, ans;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	while (true) {
		cin >> str;
		if (str == "E-N-D") break;
		string temp;
		int start = 10001, end = -1;
		bool b = false;
		for (int i = 0; i < str.length(); i++) {
			if (str[i] == '-' ||
				(str[i] >= 'A' && str[i] <= 'Z') ||
				(str[i] >= 'a' && str[i] <= 'z')) {
				if (start > i) start = i;
				if (end < i) end = i;
				if (start != 10001 && end != -1) {
					temp = str.substr(start, end + 1);
					if (ans.length() < temp.length()) ans = temp;
				}
			}
			else {
				start = 10001;
				end = -1;
			}
		}
	}
	for (int i = 0; i < ans.length(); i++) {
		if (ans[i] <= 'Z' && ans[i] != '-') ans[i] = ans[i] - 'A' + 'a';
		cout << ans[i];
	}
}
