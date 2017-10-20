#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, pi, qi, space = 0;
    cin>>n;
    for(int i = 0; i < n; i++)
    {
        cin>>pi>>qi;
        if (qi - pi >= 2) space++;
    }
    cout<<space<<endl;
}
