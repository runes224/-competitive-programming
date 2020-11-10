#include <bits/stdc++.h>
using namespace std;
#define rep(i, c) for (int i = 0; i < (int)c; i++)
const int INF = 1001001001;

int main()
{
  string N;
  cin >> N;
  vector<int> a(3);
  rep(i, N.size()) a[(N[i] - '0') % 3]++;
  int ans = INF;
  int cur = ((a[1] * 1 + a[2] * 2) % 3);
  if (cur == 0) ans = 0;
  else if (cur == 1)
  {
    if (a[1] >= 1 && N.size() > 1) ans = 1;
    else if (a[2] >= 2 && N.size() > 2) ans = 2;
    else ans = -1;
  }
  else
  {
    if (a[2] >= 1 && N.size() > 1) ans = 1;
    else if (a[1] >= 2 && N.size() > 2) ans = 2;
    else ans = -1;
  }
  cout << ans << endl;
}