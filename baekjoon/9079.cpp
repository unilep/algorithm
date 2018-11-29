#include<bits/stdc++.h>
using namespace std;

int T, MAP[3][3], ans;
char x;
const int C[] = {
    0b000000111,
    0b000111000,
    0b111000000,
    0b100100100,
    0b010010010,
    0b001001001,
    0b100010001,
    0b001010100
};
const int INF = 987654321;
const int END[] = {0, 511};
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cin >> T;
    while(T--) {
        vector<int> dist(1 << 9 + 1, INF);
        int state = 0;
        for(int i=0; i<9; i++) {
            cin >> x;
            state <<= 1;
            if(x == 'H') state += 1;
        }
        queue<int> q;
        q.push(state);
        dist[state] = 0;
        while(!q.empty()) {
            int c = q.front(); q.pop();
            if(c == END[0] || c == END[1]) break;
            for(int i=0; i<8; i++) {
                int next = c ^ C[i];
                if(dist[next] != INF) continue;
                q.push(next);
                dist[next] = dist[c] + 1;
            }
        }
        if(dist[END[0]] == INF && dist[END[1]] == INF) ans = -1;
        else ans = min(dist[END[0]], dist[END[1]]);
        cout << ans << '\n';
    }
}
