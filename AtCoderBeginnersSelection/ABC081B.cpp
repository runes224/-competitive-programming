#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, i1, i2, i3;
  cin >> n;
  i1 = n % 10;
  i2 = n % 100 >= 10;
  i3 = n >= 100;
  cout << (i1+i2+i3) << endl;
}