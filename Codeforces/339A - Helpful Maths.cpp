#include <bits/stdc++.h>

using namespace std;

int main()
{
  string input, eq = "";
  int num[52] = { }, j = 0;
  cin>>input;
  for(int i = 0; i < input.length(); i++)
  {
    if(input[i] == '+')
    {
      continue;
    }
    else
    {
      num[j++] = input[i] - '0';
    }
  }
  sort(num, num+j);
  for(int i = 0; i < j; i++)
  {
    cout<<num[i];
    if(i != j - 1) cout<<'+';
  }
  cout<<endl;
}
