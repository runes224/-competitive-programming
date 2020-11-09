#include <bits/stdc++.h>
using namespace std;
#define rep(i, c) for(int i = 0; i < (int)c; i++)

int main()
{
  int N, M, C;
  cin >> N >> M >> C;
  vector<int> b(M);
  vector<vector<int>> a(N, vector<int>(M));
  rep(i, M) cin >> b[i];
  rep(i, N) {
    rep(j, M) cin >> a[i][j];
  }
  int ans = 0;
  rep(i, N) {
    int sum = 0;
    rep(j, M) {
      sum += b[j]*a[i][j];
    }
    sum += C;
    if (sum > 0) ans++;
  }
  cout << ans << endl;
}