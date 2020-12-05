#include <bits/stdc++.h>
using namespace std;
#define rep(i, c) for (int i = 0; i < (int)c; i++)
// typedef long long int;

int main()
{
  int n;
  cin >> n;
  vector<long long> a(n);
  rep (i,n) cin >> a[i];
  long long ans = 1;
  rep (i,n) {
    ans = ans * a[i];
  };
  if (ans > pow(10, 8)) ans = -1;

  cout << ans << endl;
}