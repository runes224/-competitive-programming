#include <bits/stdc++.h>
using namespace std;
#define rep(i, c) for (int i = 0; i < (int)c; i++)
// typedef long long int;

int main()
{
  string S;
  cin >> S;
  string ans = regex_replace(S, regex(","), " ");
  cout << ans << endl;
}