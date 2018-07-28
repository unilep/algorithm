#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<functional>
using namespace std;

string N, M, A, B;
bool swapped;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cin >> N >> M;
	if (N.length() < M.length()) {
		swapped = true;
		swap(N, M);
	}
	
	for (int i = 0; i < N.length() - M.length(); i++) {
		A += N[i];
	}
	for (int i = 0; i < M.length(); i++) {
		int N_idx = N.length() - M.length() + i;
		if (N[N_idx] == M[i]) {
			if(A != "0") A += N[N_idx];
			if (B != "0") B += M[i];
		}
		else if (N[N_idx] > M[i]) {
			if (A != "0") A += N[N_idx];
		}
		else {
			if (B != "0") B += M[i];
		}
	}
	if (A == "") A = "YODA";
	if (B == "") B = "YODA";
	if (swapped) swap(A, B);
	cout << A << '\n' << B;
}
