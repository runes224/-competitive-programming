#include <bits/stdc++.h>
using namespace std;
// #define rep(i, c) for(int i = 0; i < (int)c; i++)

int main()
{
  int n;
  cin >> n;
  int ans = 1;
  int sum = 1;

  while(sum >= n) {
    ans++;
    sum+=ans;
  }

  cout << ans << endl;
}