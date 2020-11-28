#include <bits/stdc++.h>
using namespace std;
#define rep(i, c) for (int i = 0; i < (int)c; i++)

int main()
{
  int n, k;
  cin >> n >> k;
  vector<int> a(n);
  rep (i,n)
  {
    cin >> a[i];
  }

  sort(a.begin(), a.end());
  int ans = 0;
  rep (i,k) ans += a[i];

  cout << ans << endl;
}