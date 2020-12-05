#include <bits/stdc++.h>
using namespace std;
#define rep(i, c) for (int i = 0; i < (int)c; i++)
// typedef long long
using ll = long
const ll MX = 1e18;

int main()
{
  int n;
  cin >> n;
  vector<long long> a(n);
  rep(i, n) cin >> a[i];
  long long ans = 1;
  rep(i, n) {
    if(a[i] == 0){
      cout << 0 << endl;
      return 0;
    }
  }
  rep(i, n)
  {
    ans = ans * a[i];
    if (ans > 1000000000000000000 || (MX+1)/ans < a[i]) {
      cout << -1 << endl;
      return 0;
    }
  };

  cout << ans << endl;
  return 0;
}