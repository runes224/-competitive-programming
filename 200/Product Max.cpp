#include <bits/stdc++.h>
using namespace std;
#define rep(i, c) for (int i = 0; i < (int)c; i++)
typedef long long int;

int main()
{
  vector<long> a(4);
  rep(i, 4) cin >> a[i];
  long ans = LLONG_MIN;
  rep(i, 2)
  {
    rep(j, 2) {
      ans = max(ans, a[i]*a[j+2]);
    }
  }
  cout << ans << endl;
}