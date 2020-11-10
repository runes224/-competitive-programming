#include <bits/stdc++.h>
using namespace std;
#define rep(i, c) for (int i = 0; i < (int)c; i++)
const int INF = 1001001001;

int main()
{
  int N;
  cin >> N;
  int tmpN = N;
  vector<int> a = {N};
  int ans = INF;
  rep(i, to_string(tmpN).length()-1)
  {
    vector<int> tmpA = {};
    for (int ele : a)
    {
      string str = to_string(ele);
      if (ele % 3 == 0) ans = min(ans, i);
      if (str.length() == 1) continue;
      string tmpStr = str;
      rep(j, tmpStr.length())
      {
        int tmp;
        string tmpStr2 = str;
        tmp = stoi(tmpStr2.erase(j, 1));
        if (tmp % 3 == 0) tmpA.push_back(tmp);
      }
    }
    a.clear();
    a = tmpA;
  }
  if (ans == INF) ans = -1;
  cout << ans << endl;
}