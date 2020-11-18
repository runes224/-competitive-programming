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

  vector<int> nums;
  // rep(i, n-1) nums[i] = i+1;
  for (int i = 1; i < n; i++) nums.push_back(i);
  do
  {
    sum = 0;
    sum += a[0][nums[0]];
    rep(i, n-2) {
      sum += a[nums[i]][nums[i+1]];
    }
    sum += a[nums.back()][0];
    if (sum == k) ans++;
  } while (next_permutation(nums.begin(), nums.end()));

  cout << ans << endl;
}
