#include <bits/stdc++.h>
using namespace std;
#define rep(i, c) for (int i = 0; i < (int)c; i++)

int main()
{
  int N;
  cin >> N;
  vector<vector<int>> D(N, vector<int>(2));
  string ans = "No";
  rep(i, N)
  {
    cin >> D[i][0] >> D[i][1];
  }
  int counter = 0;
  rep(i, N)
  {
    if (D[i][0] == D[i][1])
      counter++;
    else
      counter = 0;
    if (counter >= 3)
    {
      ans = "Yes";
      break;
    }
  }
  cout << ans << endl;
}