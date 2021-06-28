#include <iostream>
#include <bits/stdc++.h>
#include <vector>
#include <stdio.h> 
#include <algorithm>
#include <functional>
using namespace std;

vector<string> split(const string& src, const char* delim = ".") {
    vector<string> vec;
    string::size_type len = src.length();

    for (string::size_type i = 0, n; i < len; i = n + 1) {
        n = src.find_first_of(delim, i);
        if (n == string::npos) {
            n = len;
        }
        vec.push_back(src.substr(i, n - i));
    }

    return vec;
}

int main()
{
  int n, x, y;
  cin >> n >> x >> y;
  vector<int> a(n);
  for (int i = 0; i < n; ++i)
  {
    cin >> a[i];
  }

  sort(a.begin(),a.end(),greater<int>());

  int ans = 0;

  for (int i = 0; i < n; ++i)
  {
    if (x == 0 && y == 0) {
      ans += a[i];
      continue;
    }
    // クーポンA
    int a_price = a[i];
    if (x > 0) {
      a_price = a[i] * 0.95;
      // cout << a_price << endl;
    }
    // クーポンB
    int b_price = a[i];
    if (y > 0 && a[i] >= 1000) {
      b_price = a[i] - 100;
    }

    if (a_price == b_price) {
      if (a_price == a[i]) {
        ans += a[i];
        continue;
      // } else {
      //   // 割引後価格が同じ
      // }
      }
    }
    if (a_price < b_price && a[i+1] >= 1000) {
      ans += a_price;
      x--;
      continue;
    } else {
      ans += b_price;
      y--;
    }
  }

  cout << ans << endl;
}