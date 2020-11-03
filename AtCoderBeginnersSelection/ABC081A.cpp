#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin >> n;
  vector<int> a(n);
  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
  }
  int j = 0;
  while (true)
  {
    for (int i = 0; i < n; i++)
    {
      if (a.at(i) % 2 > 0) {
        cout << j << endl;
        exit(0);
      }
      a[i] = a[i] / 2;
    }
    j++;
  }
}