#include <bits/stdc++.h>
using namespace std;
#define rep(i, c) for (int i = 0; i < (int)c; i++)
// typedef long long int;

int main()
{
  int n;
  cin >> n;
  vector<string> a(n);
  rep(i,n)cin >> a[i];
  int c1 = 0;
  int c2 = 0;
  int c3 = 0;
  int c4 = 0;
  rep(i,n) {
    if (a[i]=="AC") c1++;
    if (a[i]=="WA") c2++;
    if (a[i]=="TLE") c3++;
    if (a[i]=="RE") c4++;
  }
  cout << "AC x " << c1 << endl;
  cout << "WA x " << c2 << endl;
  cout << "TLE x " << c3 << endl;
  cout << "RE x " << c4 << endl;
}