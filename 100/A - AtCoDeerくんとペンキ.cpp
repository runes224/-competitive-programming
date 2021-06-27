#include <bits/stdc++.h>
using namespace std;
#define rep(i, c) for (int i = 0; i < (int)c; i++)

int main()
{
  int a,b,c;
  cin >> a >> b >> c;

  int ans = 0;

  ans++;

  if (a != b) ans++;

  if (a != c && b != c) ans++;

  cout << ans << endl;
}