#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
  int N, L;
  cin >> N >> L;
  vector<string> a(N);
  for (int i = 0; i < N; ++i)
  {
    cin >> a[i];
  }


  sort(a.begin(), a.end());
  string result;
  for (string str : a) result += str;

  cout << result << endl;
}