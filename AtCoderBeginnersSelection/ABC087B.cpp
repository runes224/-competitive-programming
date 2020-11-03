#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n, a, b;
  cin >> n >> a >> b;
  int res = 0;
  for (int i = 0; i < n; i++)
  {
    string s = to_string(i);
    int sum = 0;
    cout << sum << endl;
    for (int j = 0; j < (int)(s.length()); j++)
    {
      sum += int(s[j]);
    }
    if (a <= sum && sum <= b) res++;
  }
  cout << res << endl;
}