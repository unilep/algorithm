#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<cstring>
using namespace std;

int N;
string s, ans;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cin >> N;
	cin >> s;
	const int len = s.length();
	int cnt = 1;
	for(int i=0; i<len; i+=cnt++) {
		ans += s[i];
	}
	cout << ans;
}
