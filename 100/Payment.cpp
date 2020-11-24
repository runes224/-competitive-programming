#include <bits/stdc++.h>
using namespace std;
#define rep(i, c) for (int i = 0; i < (int)c; i++)
// typedef long long int;

int main()
{
  int n;
  cin >> n;
  int x = (n/1000);
  if (n%1000 != 0) x++;
  cout << x*1000-n << endl;
}