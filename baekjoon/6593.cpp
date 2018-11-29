#include <string>
#include <vector>
#include<iostream>
#include<queue>
#include<set>
#include<algorithm>
#include<cstring>
using namespace std;
const int MAX = 10000;
int C, N, M, D[31][31][31];
char A[31][31][31];
struct Node {
	int c;
	int x;
	int y;
};
Node start;
int dx[4] = {1, -1, 0, 0};
int dy[4] = {0, 0, 1, -1};
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	while(true) {
		memset(D, 0, sizeof(D));
		cin >> C >> N >> M;
		if(!C) break;
		for(int i=0; i<C; i++) {
			for(int j=0; j<N; j++) {
				for(int k=0; k<M; k++) {
					cin >> A[i][j][k];
					if(A[i][j][k] == 'S') {
						start = {i, j, k};
					}
				}
			}
		}
		queue<Node> q;
		q.push(start);
		bool ans = false;
		while(!q.empty()) {
			Node node = q.front();
			int c = node.c;
			int x = node.x;
			int y = node.y;
			q.pop();
			if(c-1 >= 0) {
				if(A[c-1][x][y] != '#') {
					if(A[c-1][x][y] == 'E') {
						cout << "Escaped in " << D[c][x][y] + 1 << " minute(s)." << '\n';
						ans = true;
						break;
					}		
					A[c-1][x][y] = '#';
					q.push({c-1,x,y});
					D[c-1][x][y] = D[c][x][y] + 1;
				}
			}
			if(c+1 < C) {
				if(A[c+1][x][y] != '#') {
					if(A[c+1][x][y] == 'E') {
						cout << "Escaped in " << D[c][x][y] + 1 << " minute(s)." << '\n';
						ans = true;
						break;
					}
					A[c+1][x][y] = '#';
					q.push({c+1,x,y});
					D[c+1][x][y] = D[c][x][y] + 1;
				}			
			}
			for(int i=0; i<4; i++) {
				int nx = x + dx[i];
				int ny = y + dy[i];
				if(nx < 0 || ny < 0 || nx >= N || ny >= M) continue;
				if(A[c][nx][ny] != '#') {
					if(A[c][nx][ny] == 'E') {
						cout << "Escaped in " << D[c][x][y] + 1 << " minute(s)." << '\n';
						ans = true;
						break;
					}
					A[c][nx][ny] = '#';
					q.push({c,nx,ny});
					D[c][nx][ny] = D[c][x][y] + 1;
				}
			}
			if(ans) break;
		}
		if(!ans) {
			cout << "Trapped!" << '\n';
		}
	}
}
