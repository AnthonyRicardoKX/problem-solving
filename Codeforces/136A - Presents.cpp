#include <bits/stdc++.h>

using namespace std;

int main()
{
  int n;
  cin>>n;
  int arr[n] = {}, b;
  for(int i = 0; i < n; i++)
  {
    cin>>b;
    arr[b-1] = i + 1;
  }
  for(int i = 0; i < n; i++)
  {
    cout<<arr[i];
    if(i != n-1) cout<<" ";
  }
  cout<<endl;
}
