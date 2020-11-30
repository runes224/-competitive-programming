#include <bits/stdc++.h>
using namespace std;
#define rep(i, c) for (int i = 0; i < (int)c; i++)

int main()
{
  vector<int> a(5);
  rep (i,5) cin >> a[i];
  int ans = 999999;
  rep (i,5) {
    if (a[i] == 0) {
      if (i == 0) ans =a[i+1]-1;
      else ans =a[i-1]+1;
    }
  }
  cout << ans << endl;
}