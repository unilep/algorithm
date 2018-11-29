#include<bits/stdc++.h>
using namespace std;

int N;
vector<int> v;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cin >> N;
    while(N) {
        v.push_back(N % 2);
        N /= 2;
    }
    int ans = 0;
    for(int i=v.size()-1; i>=0; i--) {
        if(v[i] == 0) continue;
        ans += (1 << v.size() -1 - i);
    }
    cout << ans;
}
