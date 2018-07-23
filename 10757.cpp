#include <iostream>
#include<string>
#include<algorithm>
using namespace std;

string A, B, ans;
bool carry;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cin >> A >> B;
	if (A.length() < B.length()) swap(A, B);
	
	reverse(A.begin(), A.end());
	reverse(B.begin(), B.end());
	
	for (int i = B.length(); i < A.length(); i++) B += '0';
	
	for (int i = 0; i < B.length(); i++) {
		int K = A[i] - '0' + B[i] - '0';
		if (carry) {
			carry = false;
			K += 1;
		}
		ans += (K % 10) + '0';
		if (K >= 10) carry = true;
	}
	if (carry) cout << 1;
	reverse(ans.begin(), ans.end());
	cout << ans << endl;
	
}