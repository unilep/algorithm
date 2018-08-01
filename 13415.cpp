#include<iostream>
#include<algorithm>
#include<vector>
#include<functional>
using namespace std;

int N, A[100001], K, X;
struct Node {
	int idx;
	bool asc;
};
vector<Node> v;

void func(int idx, bool asc) {
	if (v.empty() || v.back().idx > idx) {
		v.push_back({ idx, asc });
		return;
	}
	
	while (!v.empty() && v.back().idx <= idx) {
		v.pop_back();
	}
	v.push_back({ idx, asc });
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> A[i];
	}
	cin >> K;
	while (K--) {
		cin >> X;
		func(X, true);
		cin >> X;
		func(X, false);
	}

	int sz = v.size();
	for (int i = 0; i < sz; i++) {
		v[i].asc ? sort(A, A + v[i].idx) : sort(A, A + v[i].idx, greater<int>());
	}
	for (int i = 0; i < N; i++) {
		cout << A[i] << " ";
	}
}
