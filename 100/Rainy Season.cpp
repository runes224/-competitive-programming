#include <bits/stdc++.h>
using namespace std;
#define rep(i, c) for (int i = 0; i < (int)c; i++)
// typedef long long int;

int main()
{
  string S;
  cin >> S;
  int cnt = 0;
  int ans = 0;
  rep(i, 3)
  {
    if (S[i] == 'S') cnt = 0;
    if (S[i] == 'R') cnt++;
    ans = max(ans, cnt);
  }
  cout << ans << endl;
}