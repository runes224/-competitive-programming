#include <bits/stdc++.h>
using namespace std;
#define rep(i, c) for (int i = 0; i < (int)c; i++)
// typedef long long int;

int main()
{
  int a,b,c,d;
  cin >> a >> b;
  cin >> c >> d;
  int ans = 999999999;
  //0
  if (a==c && b==d) ans=0;
  //1
  if (a+b==c+d || a-b==c-d || (abs(a-c)+abs(b-d))<=3) ans=min(ans,1);
  //斜め移動のみの2
  if ((a+b)%2 == (c+d)%2) ans=min(ans,2);
  //斜め移動以外も含む2
  for (int i = -3; i <= (int)3; i++) {
    int cc =c;
    int dd =d;
    cc = cc+i;
    if (a+b==cc+d || a-b==cc-d) ans=min(ans,2);
  }
  for (int i = -3; i <= (int)3; i++) {
    int cc =c;
    int dd =d;
    dd = d+i;
    if (a+b==c+dd || a-b==c-dd) ans=min(ans,2);
  }
  int cc =c+1;
  int dd =d+1;
  if (a+b==cc+dd || a-b==cc-dd) ans=min(ans,2);
  cc =c+1;
  dd =d-1;
  if (a+b==cc+dd || a-b==cc-dd) ans=min(ans,2);
  cc =c-1;
  dd =d+1;
  if (a+b==cc+dd || a-b==cc-dd) ans=min(ans,2);
  cc =c-1;
  dd =d-1;
  if (a+b==cc+dd || a-b==cc-dd) ans=min(ans,2);
  cc =c+2;
  dd =d+1;
  if (a+b==cc+dd || a-b==cc-dd) ans=min(ans,2);
  cc =c+1;
  dd =d+2;
  if (a+b==cc+dd || a-b==cc-dd) ans=min(ans,2);
  cc =c-2;
  dd =d+1;
  if (a+b==cc+dd || a-b==cc-dd) ans=min(ans,2);
  cc =c+2;
  dd =d-1;
  if (a+b==cc+dd || a-b==cc-dd) ans=min(ans,2);
  cc =c+1;
  dd =d-2;
  if (a+b==cc+dd || a-b==cc-dd) ans=min(ans,2);
  cc =c-1;
  dd =d+2;
  if (a+b==cc+dd || a-b==cc-dd) ans=min(ans,2);
  cc =c-1;
  dd =d-2;
  if (a+b==cc+dd || a-b==cc-dd) ans=min(ans,2);


  //3以上
  ans=min(ans,3);
  cout << ans << endl;
}