#include <string>
#include <vector>
#include<iostream>
#include<map>
using namespace std;
int T, N;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cin >> T;
    while(T--) {
        cin >> N;
        map<string, int> mp;
        while(N--) {
            string a, b;
            cin >> a >> b;
            mp[b]++;
        }
        int answer = 1;
        for(auto it = mp.begin(); it != mp.end(); it++) {
            answer *= (it->second + 1);
        }
        cout << answer - 1 << '\n';
    }
}
