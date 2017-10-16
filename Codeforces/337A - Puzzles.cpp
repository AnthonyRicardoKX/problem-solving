#include <bits/stdc++.h>

using namespace std;

int main()
{
  int n, m;
  cin>>n>>m;
  int arr[m] = {};
  int maxi = 0, mini = 1001, ans = 1001;
  for(int i = 0; i < m; i++) cin>>arr[i];
  sort(arr, arr+m);
  for(int i =0; i <= m - n; i++)
  {
    maxi = max(arr[i], arr[n+i-1]);
    mini = min(arr[i], arr[n+i-1]);
    ans = min(maxi-mini, ans);
  }
  cout<<ans<<endl;
}
