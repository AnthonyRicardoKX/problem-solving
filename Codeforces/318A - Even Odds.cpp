#include <bits/stdc++.h>

using namespace std;

int main()
{
  long long n, k, range, ans;
  cin>>n>>k;
  range = n / 2 + (n % 2 != 0);
  --range;
  if (k - 1 <= range)
  {
    ans = (2 * k) - 1;
  }
  else
  {
    ans = (2 * (k - (range + 1)));
  }
  cout<<ans<<endl;
}
