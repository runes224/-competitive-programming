#include <bits/stdc++.h>
using namespace std;
#define rep(i, c) for(int i = 0; i < (int)c; i++)

int main()
{
  int n;
  cin >> n;
  vector<vector<int>> a(n, vector<int>(2));
  rep(i, n)rep(j, 2) cin >> a[i][j];
  int ans = 0;
  rep(i, n) {
    int cnt = a[i][0];
    while(cnt != a[i][1]) {
      ans += cnt;
      cnt++;
    }
    ans += cnt;
  }
  cout << ans << endl;
}