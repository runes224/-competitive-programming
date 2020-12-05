#include <bits/stdc++.h>
using namespace std;
#define rep(i, c) for (int i = 0; i < (int)c; i++)
// typedef long long int;

int main()
{
  int n;
  cin >> n;
  vector<long long> a(n);
  rep(i, n) cin >> a[i];
  long long ans = 1;
  rep(i, n) {
    if(a[i] == 0){}
    if(a[i] == 0);
  }
  rep(i, n)
  {
    ans = ans * a[i];
    if (ans > 1000000000000000000) {
      cout << -1 << endl;
      return 0;
    }
  };

  cout << ans << endl;
  return 0;
}