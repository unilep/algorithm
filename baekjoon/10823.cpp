#include <string>
#include <vector>
#include<iostream>
#include<queue>
#include<set>
#include<algorithm>
#include<cstring>
using namespace std;
vector<string> v;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	string s;
	while (cin >> s) {
		v.push_back(s);
	}
	s = "";
	for (int i = 0; i < v.size(); i++) {
		s += v[i];
	}
	int sum = 0, k = 0;
	for (int i = 0; i < s.length(); i++) {
		if (s[i] == ',') {
			sum += k;
			k = 0;
		}
		else {
			k = k * 10 + s[i] - '0';
		}
	}
	sum += k;
	cout << sum;
}
