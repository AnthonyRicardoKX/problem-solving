#include <bits/stdc++.h>

using namespace std;

int main()
{
  string names[] = {"Sheldon", "Leonard", "Penny", "Rajesh", "Howard"};
  int n, r = 1;
  cin>>n;
  while(r * 5 < n)
  {
    n -= r * 5;
    r *= 2;
  }

  cout<<names[(n - 1) / r]<<endl;
}
