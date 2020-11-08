#include <bits/stdc++.h>
using namespace std;

int main()
{
  int N, A, B;
  cin >> N >> A >> B;
  string s;
  cin >> s;
  int totalPassersby = 0;
  int totalPassersbyForeigner = 0;
  for (int i = 0; i < s.size(); ++i)
  {
    switch (s[i])
    {
    case 'a':
      if (totalPassersby < (A + B))
      {
        cout << "Yes" << endl;
        totalPassersby++;
      }
      else
      {
        cout << "No" << endl;
      }
      break;
    case 'b':
      if (totalPassersby < (A + B) && totalPassersbyForeigner < B)
      {
        cout << "Yes" << endl;
        totalPassersby++;
        totalPassersbyForeigner++;
      }
      else
      {
        cout << "No" << endl;
      }
      break;
    case 'c':
      cout << "No" << endl;
    }
  }
}