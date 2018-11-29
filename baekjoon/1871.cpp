#include <iostream>
#include<cstring>
#include <vector>
#include<string>
using namespace std;

int N;

int Pow(int a, int b) {
    if(b == 0) return 1;
    if(b == 1) return a;
    return a * Pow(a, b-1);
}

int abs(int x) {
    return x >= 0 ? x : -x;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cin >> N;
    while(N--) {
        string s;
        cin >> s;
        int sum = 0;
        for(int i=0; i<3; i++) {
            sum += (s[i] - 'A') * Pow(26, 2-i);
        }
        sum -= stoi(s.substr(4, s.length()));
        cout << (abs(sum) <= 100 ? "nice" : "not nice") << '\n';
    }
    return 0;
}
