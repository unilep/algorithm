#include <iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<queue>
using namespace std;
const int TIME = 210;
int K, N, cur;
int main() {
    ios_base::sync_with_stdio(false);
	cin.tie(0);
	cin >> K >> N;
	for(int i=0; i<N; i++) {
		int M; char C;
		cin >> M >> C;
		cur += M;
		if(cur >= TIME) {
			cout << K;
			break;
		}
		if(C == 'T') {
			K++;
			if(K == 9) K = 1;
		}
	}
}
