#include <bits/stdc++.h>
#include <iostream>
#include <string>
using namespace std;
#define rep(i, c) for (int i = 0; i < (int)c; i++)
// typedef long long int;

// 123

int main()
{
  int n;
  cin >> n;
  int sum = 0;
  string n_str = to_string(n);
  int cnt = n_str.length();
  for (int i = 0; i < cnt; i++) {
    sum += (n_str[i]-'0');
  }
  string ans = "No";
  if ((sum % 9) == 0) ans = "Yes";
  cout << ans << endl;
}