#include <bits/stdc++.h>
using namespace std;
#define rep(i, c) for (int i = 0; i < (int)c; i++)
// typedef long long int;

int main()
{
  int n,k,x,y;
  cin >> n >> k >> x >> y;
  int ans = 0;
  
  rep(i, n) {

    if (k > 0) {
      ans += x;
    } else {
      ans += y;
    }

    k--;

  }
  cout << ans << endl;
}