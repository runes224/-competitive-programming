#include <bits/stdc++.h>
using namespace std;
#define rep(i, c) for(int i = 0; i < (int)c; i++)

int main()
{
  string S, T;
  cin >> S >> T;
  int ans = 0;
  rep(i, S.size()) {
    if (S[i] != T[i]) ans++;
  }
  cout << ans << endl;
}