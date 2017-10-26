#include <bits/stdc++.h>

using namespace std;

int main()
{
  string name[] = { "Danil", "Olya", "Slava", "Ann", "Nikita" };
  string input;
  cin>>input;
  int more = 0;
  for(int i = 0; i < sizeof(name)/sizeof(name[0]); i++)
  {
    for(int j = 0; j < input.length(); )
    {
      if (input.find(name[i], j) != string::npos)
      {
        more++;
        j = input.find(name[i], j) + name[i].length() - 1;
      }
      else j++;
      if (more > 1) break;
    }
    if (more > 1) break;
  }
  if (more == 1) cout<<"YES"<<endl;
  else cout<<"NO"<<endl;
}
