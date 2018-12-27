#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<cstring>
#include<queue>
using namespace std;

int N, K;
priority_queue<int> pq;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
    cin >> N >> K;
    if (N&1) {
        pq.push(1);
        N--;
    }
    for (int i = 30; i >= 0; i--) {
        int k = 1 << i;
        while (k <= N) {
            pq.push(k);
            N -= k;
        }
    }
    while (pq.size() < K) {
		int k = pq.top();
		if (k == 1) break;
		pq.pop();
		const int p = k / 2;
		pq.push(p);
		pq.push(p);
	}
        
	if (pq.size() != K) {
        cout << "NO" << '\n';
        return 0;
    }
    cout << "YES" << '\n';
    while (!pq.empty()) {
        cout << pq.top() << " ";
        pq.pop();
    }

}
