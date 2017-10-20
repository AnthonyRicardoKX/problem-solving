#include <bits/stdc++.h>

using namespace std;

int main()
{
    char input[105];
    cin>>setw(101)>>input;
    if(strchr(input,'H') || strchr(input,'Q') || strchr(input,'9'))
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
}
