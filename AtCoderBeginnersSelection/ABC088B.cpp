#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main()
{
  int N;
  cin >> N;
  vector<int> a(N);
  for (int i = 0; i < N; ++i)
  {
    cin >> a[i];
  }

  sort(a.begin(), a.end(), std::greater<int>());
  int Alice = 0;
  int Bob = 0;
  for (int i = 1; i <= N; ++i)
  {
    if ((i % 2) > 0)
      Alice += a[i-1];
    else
      Bob += a[i-1];
  }

  cout << (Alice-Bob) << endl;
}