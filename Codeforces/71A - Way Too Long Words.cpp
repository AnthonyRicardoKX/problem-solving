#include <bits/stdc++.h>

using namespace std;

int main()
{
  int n;
  string input;
  cin>>n;
  while(n--)
  {
    cin>>input;
    if(input.length() <= 10)
    {
      cout<<input<<endl;
    }
    else
    {
      cout<<input[0]<<input.length()-2<<input[input.length()-1]<<endl;
    }
  }
}
