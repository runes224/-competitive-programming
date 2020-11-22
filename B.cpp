#include <bits/stdc++.h>
using namespace std;
#define rep(i, c) for (int i = 0; i < (int)c; i++)
// typedef long long int;

int main()
{
  int n,x;
  string s;
  cin >> n >> x;
  cin >> s;
  rep(i,n){
    if (s[i] == 'o') x++;
    else if (x>0) x--;
  }
  cout << x << endl;
}