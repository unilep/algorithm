#include<iostream>
#include<algorithm>
#include<string>
#include<vector>
#include<set>
using namespace std;

string str;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cin >> str;
	int A = 0;
	for (int i = 0; i < str.length(); i++) {
		char c = str[i];
		if (c <= 'Z') {
			A += c - 'A' + 27;
		}
		else {
			A += c - 'a' + 1;
		}
	}
	bool isPrime = true;
	for (int i = 2; i < A && isPrime; i++) {
		if (A % i == 0) isPrime = false;
	}
	if (isPrime) cout << "It is a prime word.";
	else cout << "It is not a prime word.";
}
