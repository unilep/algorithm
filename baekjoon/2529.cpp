#include <iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<queue>
using namespace std;
int N, B[10];
char A[10];
vector<vector<int>> v;
int main() {
    ios_base::sync_with_stdio(false);
	cin.tie(0);
	for(int i=0; i<10; i++) {
		B[i] = i;
	}
	cin >> N;
	for(int i=0; i<N; i++) cin >> A[i];
	do {
		bool is = true;
		for(int i=0; i < N && is; i++) {
			if(A[i] == '>') {
				if(!(B[i] > B[i+1])) is = false;
			} else {
				if(!(B[i] < B[i+1])) is = false;
			}
		}
		if(is) {
			vector<int> a;
			for(int i=0; i<=N; i++) {
				a.push_back(B[i]);
			}
			v.push_back(a);
		}
	} while(next_permutation(B, B+10));
	sort(v.begin(), v.end());
	for(int i=0; i<=N; i++) cout << v[v.size()-1][i];
	cout << '\n';
	for(int i=0; i<=N; i++) cout << v[0][i];
}
