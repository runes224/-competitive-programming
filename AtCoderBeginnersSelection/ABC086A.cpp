#include <bits/stdc++.h>
using namespace std;

int main() {
  int a, b;
  cin >> a >> b;
  string result;

  if ( (a*b) % 2 > 0 ) {
    result = "Odd";
  } else {
    result = "Even";
  }
  cout << result << endl;
}