#include <bits/stdc++.h>

using namespace std;

int main()
{
  const int fixed = 9;
  int n;
  cin>>n;
  if (n%2 == 0)
  {
    if ((n/2)%2 != 0)
    {
      cout<<(n / 2 + 1)<<" "<<(n / 2 - 1)<<endl;
    }
    else
    {
      cout<<(n / 2)<<" "<<(n / 2)<<endl;
    }
  }
  else
  {
    cout<<fixed<<" "<<(n - fixed)<<endl;
  }
}
