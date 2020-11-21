#include <bits/stdc++.h>
using namespace std;
#define rep(i, c) for (int i = 0; i < (int)c; i++)
// typedef long long int;

void recursive_comb(int *indexes, int s, int rest, std::function<void(int *)> f) {
  if (rest == 0) {
    f(indexes);
  } else {
    if (s < 0) return;
    recursive_comb(indexes, s - 1, rest, f);
    indexes[rest - 1] = s;
    recursive_comb(indexes, s - 1, rest - 1, f);
  }
}

// nCkの組み合わせに対して処理を実行する
void foreach_comb(int n, int k, std::function<void(int *)> f) {
  int indexes[k];
  recursive_comb(indexes, n - 1, k, f);
}


int main()
{
  int n;
  cin >> n;
  vector<vector<int>> a(n, vector<int>(2));
  rep(i, n)rep(j, 2) cin >> a[i][j];
  string ans = "No";
  rep(i, n)
  {
  }
  // cout << ans << endl;

  foreach_comb(5, 3, [](int *indexes) {
    std::cout << indexes[0] << ',' << indexes[1] << ',' << indexes[2] << std::endl;
  });
}