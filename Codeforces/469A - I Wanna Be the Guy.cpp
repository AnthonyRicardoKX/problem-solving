#include <bits/stdc++.h>

using namespace std;

int main()
{
  int n, p, q, num;
  cin>>n;
  bool arr[n] = { false };
  cin>>p;
  for(int i = 0; i < p; i ++)
  {
    cin>>num;
    arr[num - 1] = true;
  }
  cin>>q;
  for(int i = 0; i < q; i++)
  {
    cin>>num;
    arr[num - 1] = true;
  }
  for(int i = 0; i < n; i++)
  {
    if (arr[i] == false)
    {
      cout<<"Oh, my keyboard!"<<endl;
      return 0;
    }
  }
  cout<<"I become the guy."<<endl;
}
