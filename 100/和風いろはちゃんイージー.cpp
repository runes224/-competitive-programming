#include <iostream>
#include <vector>
using namespace std;

int main()
{
  vector<int> a(3);
  for (int i = 0; i < 3; ++i)
  {
    cin >> a[i];
  }

  int five = 0;
  int seven = 0;
  for (int num : a) {
    if (num == 5) five++;
    if (num == 7) seven++;
  }

  string result;
  if (five == 2 && seven == 1) result = "YES";
  else result = "NO";

  cout << result << endl;
}