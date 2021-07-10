#include <bits/stdc++.h>
using namespace std;
// #define rep(i, c) for(int i = 0; i < (int)c; i++)

int main()
{
  int n;
  cin >> n;
  int ans = 0;
  int num = 10;

  while( p > 0) {
    int factorial = facctorialMethod(num);

    if (factorial > p) {
      num--;
      continue;
    }

    p -= factorial;
    ans++;
  }

  cout << ans << endl;
}