#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<functional>
using namespace std;

int N, K, T;
string X;
char stack[500001];

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cin >> N >> K >> X;
	for (int i = 0; i < N; i++) {
		while (K && T && stack[T - 1] < X[i]) {
			T--;
			K--;
		}
		stack[T++] = X[i];
	}
	T -= K;
	stack[T] = 0;
	cout << stack;
}