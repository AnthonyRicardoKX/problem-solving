#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int a, b, cap = 0, cur = 0;
    for(int i = 0; i < n; i++)
    {
        cin>>a>>b;
        cur = cur - a + b;
        cap = max(cap, cur);
    }
    cout<<cap<<endl;
}
