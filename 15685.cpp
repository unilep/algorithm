#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;
int N, ans;
bool A[101][101];
int dx[4] = {0, -1, 0, 1};
int dy[4] = {1, 0, -1, 0}; // 우 상 좌 하
int dir[4] = {1, 2, 3, 0};

struct Node {
	int x;
	int y;
	int d;
	int g;
};

void makeCurve(Node& node) {
	A[node.x][node.y] = true;
	int start = node.d;
	vector<int> v;
	v.push_back(start);
	for(int i=0; i<node.g; i++) {
		for(int j =v.size()-1; j>=0; j--) {
			v.push_back(dir[v[j]]);
		}
	}
	int x = node.x;
	int y = node.y;
	for(int i=0; i<v.size(); i++) {
		int nx = x + dx[v[i]];
		int ny = y + dy[v[i]];
		A[nx][ny] = true;
		x = nx;
		y = ny;
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cin >> N;
	for(int i=0; i<N; i++) {
		Node node;
		cin >> node.y >> node.x >> node.d >> node.g;
		makeCurve(node);
	}
	for(int i=0; i<100; i++) {
		for(int j=0; j<100; j++) {
			if(A[i][j] && A[i+1][j] && A[i][j+1] && A[i+1][j+1])
				ans++;
		}
	}
	cout << ans;
    return 0;
}

