#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
#define rep(i, c) for (int i = 0; i < (int)c; i++)
#define ALL(a)  (a).begin(),(a).end()

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

  rep(i,x) {
    int n;
    cin >> n;

    int index = lower_bound(ALL(a), n);
    if (a[index] == n) {
      cout << "Yes ";
      cout << a[i] << endl;
    } else {
      cout << "No ";
      cout << a[i] << endl;
    }
  }
  return 0;
}
