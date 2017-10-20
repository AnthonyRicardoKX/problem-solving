#include <bits/stdc++.h>

using namespace std;

int main()
{
    string input;
    int n;
    cin>>n;
    cin>>setw(n)>>input;
    char last = input[0];
    int rem = 0;
    for(int i = 1; i < n; i++)
    {
        if(last == input[i]) rem++;
        else
        {
            last = input[i];
        }
    }
    cout<<rem<<endl;
}
