#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
#define rep(i, c) for (int i = 0; i < (int)c; i++)

int main() {
  int N;
  cin >> N;
  vector<int> a(N);
  for (int i = 0; i < N; ++i)
  {
    cin >> a[i];
  }
  int x;
  cin >> x;
  int t, b;
  cin >> t >> b;

  a.erase(a.begin()+(x-1));

  a.erase(a.begin()+(t-1), a.begin()+(b-1));

  cout << a.size() << endl;
  rep(i, a.size()) {
    cout << a[i];
    cout << " ";
  }
  return 0;
}
