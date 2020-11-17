#include <bits/stdc++.h>
using namespace std;
// typedef long long int;

int main()
{
  double sx, sy, gx, gy;
  cin >> sx >> sy >> gx >> gy;

  sy = -sy;

  double a = gx-sx/gy-sy;
  double ans = -sy/a;

  cout << ans << endl;
}