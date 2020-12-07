#include <bits/stdc++.h>
using namespace std;
#define rep(i, c) for (int i = 0; i < (int)c; i++)
// typedef long long int;

int main()
{
  string a,b,c;
  cin >> a >> b >>c;
  string ans = "No";
  if(a[a.size()-1]==b[0] && b[b.size()-1]==c[0]) ans = "Yes";
  cout << ans << endl;
}