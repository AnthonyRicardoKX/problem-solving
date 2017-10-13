#include <bits/stdc++.h>

using namespace std;

int main()
{
  string input;
  cin>>input;
  char init = input[0];
  int dupes = 1;
  for(int i = 1; i < input.length(); i++)
  {
    if(init == input[i]) dupes++;
    else
    {
      init = input[i];
      dupes = 1;
    }
    if(dupes >= 7) break;
  }
  cout<<((dupes >= 7)?"YES":"NO")<<endl;
}
