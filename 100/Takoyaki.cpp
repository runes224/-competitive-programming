#include <bits/stdc++.h>
using namespace std;
#define rep(i, c) for (int i = 0; i < (int)c; i++)

int main()
{
  int n, x, t;
  cin >> n >> x >> t;

  int c = n/x;
  if (n%x>0) c++;

  cout << c*t << endl;
}