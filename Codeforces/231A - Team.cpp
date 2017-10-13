#include <bits/stdc++.h>

using namespace std;

int main()
{
  int n, solved = 0;
  cin>>n;
  for(int i = 0; i < n; i++)
  {
    int vote = 0, p;
    for(int j = 0; j < 3; j++)
    {
      cin>>p;
      vote += p;
    }
    if(vote >= 2) solved++;
  }
  cout<<solved<<endl;
}
