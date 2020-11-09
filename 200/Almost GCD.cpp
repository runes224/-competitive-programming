#include <bits/stdc++.h>
using namespace std;
// #define rep(i, c) for(int i = 0; i < (int)c; i++)

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
  int ans = 0;
  int maxCount = 0;
  for (int i = 2; i <= a[a.size()-1]; ++i)
  {
    int count = 0;
    for (int ele : a)
    {
      if ((ele % i) == 0) count++;
    }
    if (maxCount < count) {
      ans = i;
      maxCount = count;
    }
  }
  cout << ans << endl;
}