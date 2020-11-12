#include <bits/stdc++.h>
using namespace std;
#define rep(i, c) for (int i = 0; i < (int)c; i++)

int main()
{
  string S;
  cin >> S;
  string ans;
  if (S[S.size()-1] == 's') ans = S +"es";
  else ans = S +"s";
  cout << ans << endl;
}