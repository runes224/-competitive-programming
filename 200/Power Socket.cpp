#include <bits/stdc++.h>
using namespace std;

int main()
{
  int A, B;
  cin >> A >> B;
  int sum = 1;
  int i = 0;
  while (sum < B)
  {
    sum += A - 1;
    i++;
  }

  cout << i << endl;
}