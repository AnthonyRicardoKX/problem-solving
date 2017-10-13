#include <bits/stdc++.h>

using namespace std;

int main()
{
  string input1, input2;
  int count1, count2;
  cin>>input1>>input2;
  count1 = count2 = 0;

  for(int i = 0; i < input1.length(); i++)
  {
    if(tolower(input1[i]) < tolower(input2[i]))
    {
      cout<<"-1"<<endl; return 0;
    }
    else if(tolower(input1[i]) > tolower(input2[i]))
    {
      cout<<'1'<<endl; return 0;
    }
    else  continue;
  }
  cout<<'0'<<endl;
}
