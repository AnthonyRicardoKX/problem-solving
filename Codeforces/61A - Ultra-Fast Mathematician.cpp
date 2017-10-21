#include <bits/stdc++.h>

using namespace std;

int main()
{
  string input1, input2;
  cin>>input1>>input2;
  for(int i = 0; i < input1.length(); i++)
  {
    if (input1[i] != input2[i]) cout<<1;
    else cout<<0;
  }
  cout<<endl;
}
