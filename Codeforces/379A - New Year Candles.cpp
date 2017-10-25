#include <bits/stdc++.h>

using namespace std;

int main()
{
  int a, b, total = 0;
  cin>>a>>b;
  while(a > b - 1)
  {
    a -= (b - 1);
    total += b;
  }
  total += a;
  cout<<total<<endl;
}
