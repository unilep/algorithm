#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int N, S, A[100001];

int gcd(int x, int y)
{
  return y == 0 ? x : gcd(y, x % y);
}

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  cin >> N >> S;
  for (int i = 0; i < N; i++)
  {
    int x;
    cin >> x;
    A[i] = abs(S - x);
  }
  if (N == 1)
  {
    cout << A[0];
    return 0;
  }
  int ans = gcd(A[0], A[1]);
  for (int i = 2; i < N; i++)
  {
    ans = gcd(ans, A[i]);
  }
  cout << ans;
  return 0;
}
