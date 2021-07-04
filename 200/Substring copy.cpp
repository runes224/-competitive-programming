#include <bits/stdc++.h>
using namespace std;
// #define rep(i, c) for (int i = 0; i <= (int)c; i++)

// https://atcoder.jp/contests/abc177/tasks/abc177_b

int main()
{
  string s, t;
  cin >> s;
  cin >> t;

  int ans = s.size();
  for (int i = 0; i <= (int)s.size()-t.size(); i++) {
    int cnt = 0;
    for (int j = 0; j < (int)t.size(); j++) {
      if(s[j+i] != t[j]) {
        cnt++;
      }
    }
    ans = min(ans, cnt);
  }

  cout << ans << endl;
}