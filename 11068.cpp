#include <string>
#include <vector>
#include<iostream>
#include<set>
#include<algorithm>
using namespace std;

int T, N;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cin >> T;
	while (T--) {
		cin >> N;
		bool isok = true;
		for (int i = 2; i <= 64; i++) {
			int K = N;
			vector<int> v;
			while (K) {
				v.push_back(K % i);
				K /= i;
			}
			int c = v.size() / 2;
			isok = true;
			for (int j = 0; j < c && isok; j++) {
				if (v[j] != v[v.size() - j - 1]) isok = false;
			}
			if (isok) break;
		}
		cout << (isok ? 1 : 0) << '\n';
	}
}
