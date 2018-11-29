#include <iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<queue>
using namespace std;
int T, A, B;
struct Node {
	int price;
	int people;
};
vector<Node> P, Q;
int p[110], q[110];
int main() {
    ios_base::sync_with_stdio(false);
	cin.tie(0);
	P.push_back({5'000'000, 1});
	P.push_back({3'000'000, 2});
	P.push_back({2'000'000, 3});
	P.push_back({500'000, 4});
	P.push_back({300'000, 5});
	P.push_back({100'000, 6});
	Q.push_back({5'120'000, 1});
	Q.push_back({2'560'000, 2});
	Q.push_back({1'280'000, 4});
	Q.push_back({640'000, 8});
	Q.push_back({320'000, 16});
	int K = 0;
	for(int i=0; i<P.size(); i++) {
		Node node = P[i];
		while(node.people--) {
			p[K++] = node.price;
		}
	}
	K = 0;
	for(int i=0; i<Q.size(); i++) {
		Node node = Q[i];
		while(node.people--) {
			q[K++] = node.price;
		}
	}
	
	cin >> T;
	while(T--) {
		cin >> A >> B;
		cout << p[A-1] + q[B-1] << '\n';
	}
}
