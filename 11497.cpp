#include <iostream>
#include<algorithm>
#include<cstring>
#include <vector>
#include<string>
using namespace std;

int T, N, A[10001];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cin >> T;
    while(T--) {
        cin >> N;
        for(int i=0; i<N; i++) {
            cin >> A[i];
        }
        sort(A, A+N);
        int j = 0;
        int k = 0;
        int B[10001];
        for(int i=0; i<N; i++) {
            if(i&1) {
                B[N-j-1] = A[i];
                j++;
            } else {
                B[k++] = A[i];
            }
        }
        int r = 0;
        for(int i=1; i<N; i++) {
            r = max(r, abs(B[i] - B[i - 1]));
        }
        r = max(r, abs(B[0] - B[N-1]));
        cout << r << '\n';
    }
    return 0;
}
