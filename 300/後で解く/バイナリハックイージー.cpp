#include <bits/stdc++.h>
using namespace std;
#define rep(i, c) for(int i = 0; i < (int)c; i++)

int main()
{
  string S;
  cin >> S;
  string result;
  rep (i, S.size()) {
    cout << result << endl;
    // if (result.size() == 0 && S[i] == 'B') break;
    if (result.size() != 0 && S[i] == 'B') {
      result.pop_back();
      break;
    }
    result += S[i];
  }

  cout << result << endl;
}