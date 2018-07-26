#include<bits/stdc++.h>
using namespace std;

int N;
string A[21];

bool comparator(const string& Pre, const string& Next) {
    return Pre < Next;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cin >> N;
    for(int i=0; i<N; i++) cin >> A[i];
    bool mode = comparator(A[0], A[1]);
    for(int i=1; i<N - 1; i++) {
        if(mode == comparator(A[i], A[i+1])) continue;
        cout << "NEITHER";
        return 0;
    }
    cout << (!mode ? "DECREASING" : "INCREASING");
}
