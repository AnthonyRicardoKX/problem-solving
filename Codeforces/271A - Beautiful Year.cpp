#include <bits/stdc++.h>

using namespace std;

int main()
{
  int year;
  cin>>year;

  int i = 0;
  while(true)
  {
    i++;
    int ny = year + i;
    int a = ny / 1000;
    int b = ny / 100 % 10;
    int c = ny / 10 % 10;
    int d = ny % 10;
    if(a != b && a != c && a != d && b != c && b != d && c != d)
    {
      cout<<ny<<endl;
      break;
    }
  }
}
