#include <bits/stdc++.h>

using namespace std;

int main()
{
  int n, a, b, wear = 0;
  int home[101] = { 0 };
  vector<int> guest;
  cin>>n;
  for(int i = 0; i < n; i++)
  {
    cin>>a>>b;
    home[a]++;
    guest.push_back(b);
  }
  for(int i = 0; i < n; i++)
  {
    wear += home[guest.back()];
    guest.pop_back();
  }
  cout<<wear<<endl;
}
