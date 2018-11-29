#include<bits/stdc++.h>
using namespace std;

int N, C, A[1001];
map<int, int> cnt, pre;

bool Comparator(int a, int b) {
    if(cnt[a] == cnt[b]) return pre[a] < pre[b];
    return cnt[a] > cnt[b];
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cin >> N >> C;
    for(int i=0; i<N; i++) {
        cin >> A[i];
        cnt[A[i]]++;
        if(!pre.count(A[i])) pre[A[i]] = i;
    }
    sort(A, A+N, Comparator);
    for(int i=0; i<N; i++) cout << A[i] << " ";
}
