#include <bits/stdc++.h>

using namespace std;

int main()
{
  int n, x = 0;
  string input;
  cin>>n;
  for(int i = 0; i < n; i++)
  {
    cin>>input;
    if(input[1] == '+') x++;
    else x--;
  }
  cout<<x<<endl;
}
