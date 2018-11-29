#include<iostream>
#include<algorithm>
#include<unordered_map>
using namespace std;

int N, M, X;
unordered_map<int, int> m;

void func(int val) {
	auto it = m.find(val);
	if (it == m.end()) {
		m.insert({ val, 1 });
	}
	else {
		int cnt = m[val];
		m[val] = cnt + 1;
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	cin >> N >> M;
	for (int i = 0; i < N; i++) {
		cin >> X;
		func(X);
	}
	for (int i = 0; i < M; i++) {
		cin >> X;
		func(X);
	}
	X = 0;
	for (auto it = m.begin(); it != m.end(); it++) {
		if (it->second == 1) X++;
	}
	cout << X;
	
	return 0;
}
