#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

//  S  E  W  N
// 남 동 서 북

int dx[4] = {1, 0, 0, -1};
int dy[4] = {0, 1, -1, 0};
bool A[2002][2002];
int ans = 1, x = 1000, y = 1000;

string str = "SEWN";

void move(char c)
{
  for (int i = 0; i < 4; i++)
  {
    if (str[i] == c)
    {
      x += dx[i];
      y += dy[i];
      if (!A[x][y])
      {
        ans++;
      }
      A[x][y] = true;
    }
  }
}

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  int L;
  cin >> L;
  A[x][y] = true;
  string s;
  cin >> s;

  for (char c : s)
  {
    move(c);
  }
  cout << ans;
  return 0;
}
