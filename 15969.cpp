#include<iostream>
#include <string>
#include <vector>
using namespace std;

int N, mx = 0, mi = 1000;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cin >> N;
	while (N--) {
		int X;
		cin >> X;
		if (mx < X)mx = X;
		if (mi > X)mi = X;
	}
	cout << mx - mi;
}
