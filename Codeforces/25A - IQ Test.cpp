#include <bits/stdc++.h>

using namespace std;

int main()
{
  int n, a, b, odd, even;
  cin>>n;
  b = odd = even = 0;
  for(int i = 0; i < n; i++)
  {
    cin>>a;
    if (a % 2 == 0)
    {
      b++;
      even = i;
    }
    else
    {
      b--;
      odd = i;
    }
  }
  if (b > 0) cout<<odd + 1<<endl;
  else cout<<even + 1<<endl;
}
