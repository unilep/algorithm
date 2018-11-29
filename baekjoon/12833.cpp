#include<iostream>
using namespace std;

int A, B, C, K;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cin >> A >> B >> C;
	cout << (C & 1 ? A ^ B : A);
}
