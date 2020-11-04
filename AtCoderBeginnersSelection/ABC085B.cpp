#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main()
{
  int N;
  cin >> N;
  vector<int> arr(N);
  for (int i = 0; i < N; ++i) cin >> arr[i];
  set<int> s(arr.begin(), arr.end());
  cout << (s.size()) << endl;
}