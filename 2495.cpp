#include <iostream>
using namespace std;

char N[10];

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	for (int i = 0; i < 3; i++) {
		cin >> N;
		int max = 1, number = N[0], cnt = 1;
		for (int i = 1; N[i]; i++) {
			if (number == N[i]) cnt++;
			else {
				if (max < cnt) max = cnt;
				number = N[i];
				cnt = 1;
			}
		}
		if (max < cnt) max = cnt;
		cout << max << '\n';
	}
}