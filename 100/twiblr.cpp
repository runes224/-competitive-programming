#include <bits/stdc++.h>
using namespace std;
#define rep(i, c) for(int i = 0; i < (int)c; i++)

int main()
{
  int follower, follow;
  cin >> follower >> follow;
  int ans = 0;
  ans = ((follower*2)+100) - follow;
  cout << ans << endl;
}