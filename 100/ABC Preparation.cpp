#include <bits/stdc++.h>
using namespace std;
// #define rep(i, c) for (int i = 0; i < (int)c; i++)
// typedef long long int;

int main()
{
  int a,b,c,d;
  cin >> a >> b >> c >> d;
  int ans = 0;
  while (true)
  {
    a--;
    b--;
    c--;
    d--;
    ans++;
    if (a<=0||b<=0||c<=0||d<=0) {
      cout << ans << endl;
      return 0;
    }
  }
} 