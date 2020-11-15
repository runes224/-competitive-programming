#include <bits/stdc++.h>
using namespace std;
#define rep(i, c) for (int i = 0; i < (int)c; i++)

int main()
{
  int D, T, S;
  cin >> D >> T >>S;
  string ans = "Yes";
  if (D>T*S) ans = "No";
  cout << ans << endl;
}