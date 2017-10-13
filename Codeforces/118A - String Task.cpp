#include <bits/stdc++.h>

using namespace std;

int main()
{
  string input;
  getline(cin,input);
  for(int i = 0; i < input.length(); i++)
  {
    input[i] = tolower(input[i]);
    if(input[i] == 'a' || input[i] == 'e' || input[i] == 'i' || input[i] == 'o' || input[i] == 'u' || input[i] == 'y') continue;
    else cout<<'.'<<input[i];
  }
  cout<<endl;
}
