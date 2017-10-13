#include <bits/stdc++.h>

using namespace std;

int main()
{
  int n, k, win = 0;
  cin>>n>>k;
  int score[n] = { };
  for(int i = 0; i < n; i++)
  {
    cin>>score[i];
  }
  for(int j = 0; j < n; j++)
  {
    if(score[j] >= score[k-1] && score[j] > 0) win++;
    else break;
  }
  cout<<win<<endl;
}
