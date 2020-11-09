#include <bits/stdc++.h>
using namespace std;
#define rep(i, c) for(int i = 0; i < (int)c; i++)

int main()
{
  double N;
  cin >> N;
  int ans = 0;
  ans = N / 1.08 - 1;
  rep (i, 3) {
    if (floor(ans * 1.08) == N) {
      cout << ans << endl;
      return 0;
    }
    ans++;
  }
  cout << ":(" << endl;
}