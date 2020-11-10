#include <bits/stdc++.h>
using namespace std;
#define rep(i, c) for (int i = 0; i < (int)c; i++)

int main()
{
  int N;
  cin >> N;
  string ans = "White";
  if (N%2 == 1) ans = "Black";
  cout << ans << endl;
}