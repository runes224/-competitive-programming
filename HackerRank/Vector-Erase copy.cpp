#include <iostream>
#include <string>
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

vector<string> split(const string& src, const char* delim = " ") {
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

int main() {
  string line;
  while (getline(cin, line)) {
    vector<string> arr = split(line);
    int ans = 0;

    for (int i = 0; i < arr.size(); ++i) {
        int price = std::stoi(arr[i]);
        if (price <= 10000) {
          ans += ans;
        }
    }
    cout << ans << endl;
  }
}