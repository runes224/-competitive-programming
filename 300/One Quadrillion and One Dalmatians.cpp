#include <bits/stdc++.h>
using namespace std;
#define rep(i, c) for (int i = 0; i < (int)c; i++)
typedef long long ll;

int main()
{
  int n;
  cin >> n;
  string ans;

  // 何桁か?
  ll digit = 1;
  ll num = 26;
  while (num<n)
  {
    digit++;
    num += pow(26, digit);
  }

  // 該当の桁の最小の数値を求める
  ll miniNum = num /26;

  char str[] = "abcdefghijklmnopqrstuvwxyz";

  ll diff = n-miniNum;
  ll j =0;
  for (int i = digit; i > 0; i--)
  {
    ll nn = pow(26,i-1);
    ll nnn = diff / nn;
    ans += str[nnn];
    j++;
  }
  reverse(ans.begin(), ans.end());
  cout << ans << endl;
}