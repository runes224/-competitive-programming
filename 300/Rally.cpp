#include <bits/stdc++.h>
using namespace std;
#define rep(i, c) for(int i = 0; i < (int)c; i++)

int main()
{
  int N;
  cin >> N;
  vector<int> a(N);
  for (int i = 0; i < N; ++i)
  {
    cin >> a[i];
  }
  sort(a.begin(), a.end());
  vector<int> p;
  int ans =  1000000000;
  for (int i = 1; i <= 100; ++i)
  {
    int sum = 0;
    for (int j = 0; j < N; j++)
    {
      sum += (a[j]-i) * (a[j]-i);
    }
    ans = min(ans, sum);
  }
  cout << ans << endl;
}