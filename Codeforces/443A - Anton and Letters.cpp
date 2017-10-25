#include <bits/stdc++.h>

using namespace std;

int main()
{
  char input[1000];
  bool arr[26] = { false };
  char *pch;
  int ans = 0;
  cin.getline(input, 1000);
  pch = strtok(input, " ,{}");
  while(pch != NULL)
  {
    arr[(int) *pch - 97] = true;
    pch = strtok(NULL, " ,{}");
  }
  for(int i = 0; i < 26; i++)
  {
    if (arr[i] == true) ans++;
  }
  cout<<ans<<endl;
}
