#include <bits/stdc++.h>
using namespace std;
#define rep(i, c) for (int i = 0; i < (int)c; i++)
// typedef long long int;

int main()
{
  int n, k;
  cin >> n >> k;
  vector<vector<int>> a(n, vector<int>(n));
  rep(i, n) rep(j, n) cin >> a[i][j];

  int ans = 0;
  int sum = 0;

  vector<int> nums(n);
  rep(i, n) nums[i] = i;
  do
  {
    sum = 0;
    if (nums[0] == 0) continue;
    rep(i, n) {
      sum += a[i][nums[i]];
    }
    if (sum == k) ans++;
  } while (next_permutation(nums.begin(), nums.end()));

  cout << ans << endl;
}
