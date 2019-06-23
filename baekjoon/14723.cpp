#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  int N, a = 2, b = 1, x = 1;
  cin >> N;
  if (N == 1)
  {
    cout << "1 1";
    return 0;
  }
  int d = 2, k = 2;
  while (N >= k + d)
  {
    k += d;
    d++;
    a++;
  }
  while (k != N)
  {
    a--;
    b++;
    k++;
  }
  cout << a << ' ' << b;
  return 0;
}
