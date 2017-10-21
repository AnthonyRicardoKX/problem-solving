#include <bits/stdc++.h>

using namespace std;

int main()
{
  int n;
  string ch;
  cin>>n;
  char last;
  int g = 1;
  for(int i = 0; i < n; i++)
  {
    cin>>ch;
    if (i == 0)
    {
      last = ch[1];
    }
    else
    {
      if (last == ch[0])
      {
        last = ch[1];
        g++;
      }
    }
  }
  cout<<g<<endl;
}
