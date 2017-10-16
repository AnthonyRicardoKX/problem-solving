#include <bits/stdc++.h>

using namespace std;

int main()
{
  string input;
  cin>>input;
  bool flag = true;
  for (int i = 0; i < input.size(); i++)
  {
    if(input[i] == 'W' && input[i+1] == 'U' && input[i+2] == 'B')
    {
      i += 2;
      if(!flag) cout<<" ";
    }
    else
    {
      cout<<input[i];
      flag = false;
    }
  }
}
