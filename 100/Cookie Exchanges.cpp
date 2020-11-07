#include <bits/stdc++.h>
using namespace std;

int main()
{
  int A, B, C;
  cin >> A >> B >> C;
  int i = 0;
  int a = A;
  int b = B;
  int c = C;
  while ((A % 2) == 0 && (B % 2) == 0 && (C % 2) == 0)
  {
    int tA = A;
    int tB = B;
    int tC = C;
    A = (tB / 2) + (tC / 2);
    B = (tA / 2) + (tC / 2);
    C = (tB / 2) + (tA / 2);
    if (A == a && B == b && C == c)
    {
      cout << -1 << endl;
      exit(0);
    }
    i++;
  }

  cout << i << endl;
}