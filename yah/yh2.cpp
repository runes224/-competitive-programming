#include <iostream>
#include <bits/stdc++.h>
#include <vector>
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
  int n, d;
  cin >> n >> d;
  vector<string> a(n);
  for (int i = 0; i < n; ++i)
  {
    cin >> a[i];
  }

  // 無駄な拠点を削除
  for (int i = 0; i < n; ++i)
  {
    vector<string> arr(d);
    vector<string> d_arr = split(a[i]);
    for (int i = 0; i < d; ++i)
    {
      arr.push_back(d_arr[d_arr.size() -1]);
      d_arr.pop_back();
    }
  }
  
  
}