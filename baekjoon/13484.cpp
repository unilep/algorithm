#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  int X, N, ans = 0, a;
  cin >> X >> N;
  for (int i = 0; i < N; i++)
  {
    cin >> a;
    ans += X - a;
  }
  cout << ans + X;

  return 0;
}
