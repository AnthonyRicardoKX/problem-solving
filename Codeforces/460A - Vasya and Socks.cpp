#include <bits/stdc++.h>

using namespace std;

int main()
{
  int n, m, i = 1, con = 0;
  cin>>n>>m;
  while(n > 0)
  {
    n--; con++;
    if (i % m == 0) n++;
    if (n == 0) break;
    i++;
  }
  cout<<con<<endl;
}
