#include <bits/stdc++.h>
using namespace std;
#define rep(i, c) for(int i = 0; i < (int)c; i++)

int main()
{
  long long a, b, c, d;
  cin >> a >> b >> c >> d;
  long long ans = -1;
  if (b >= c * d) {
    cout << ans << endl;
    return 0;
  }

  ans = 0;
  while(a + (b*ans) > d*c*ans) {
    ans++;
  }

  cout << ans << endl;
}