#include <bits/stdc++.h>
using namespace std;
#define rep(i, c) for (int i = 0; i < (int)c; i++)

int main()
{
  int N;
  cin >> N;
  int tmpN = N;
  vector<int> a = {N};
  rep(i, to_string(tmpN).length())
  {
    if ((N % 3) == 0)
    {
      cout << i << endl;
      return 0;
    }
    vector<int> tmpA;
    for (int ele : a)
    {
      string str = to_string(ele);
      if (str.length() == 1)
      {
        if (ele % 3 == 0)
        {
          cout << i + 1 << endl;
          return 0;
        }
      }
      else
      {
        string tmpStr = str;
        rep(j, tmpStr.length()+1)
        {
          int tmp;
          string tmpStr2 = str;
          tmp = stoi(tmpStr2.erase(j, 1));
          if (tmp % 3 == 0)
          {
            cout << i + 1 << endl;
            return 0;
          }
          else
          {
            tmpA.push_back(tmp);
          }
        }
      }
    }
    a.clear();
    a = tmpA;
    tmpA.clear();
  }
  cout << -1 << endl;
}