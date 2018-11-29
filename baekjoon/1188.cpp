#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;

int N, M, ans;

int gcd(int a, int b) {
	return b ? gcd(b, a%b) : a;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cin >> N >> M;
	int g = gcd(N, M);
	M /= g;
	cout << g * (M- 1);
}

