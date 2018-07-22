#include <iostream>
using namespace std;

int N, F;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cin >> N >> F;
	int A = N - (N % 100);
	while (A % F != 0) A++;
	A = A % 100;
	if (A < 10) cout << 0;
	cout << A;
}