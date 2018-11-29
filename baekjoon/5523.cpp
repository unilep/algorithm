#include<iostream>
using namespace std;

int N, A, B, X, Y;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cin >> N;
	while (N--) {
		cin >> X >> Y;
		if (X > Y) A++;
		else if (X < Y) B++;
	}
	cout << A << " " << B;
}
