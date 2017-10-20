#include <bits/stdc++.h>

using namespace std;

int main()
{
  string s, t;
  cin>>s>>t;
  int j = s.length() - 1;
  for(int i = 0; i < s.length(); i++)
  {
    if(s[i] != t[j--])
    {
      cout<<"NO"<<endl;
      return 0;
    }
  }
  cout<<"YES"<<endl;
}
