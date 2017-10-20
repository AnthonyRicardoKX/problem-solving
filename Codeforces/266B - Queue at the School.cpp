#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, t;
    string input;
    cin>>n>>t;
    cin>>setw(n)>>input;
    for(int i = 0; i < t; i++)
    {
        for(int j = 1; j < n; j++)
        {
            if (input[j] == 'G' && input[j-1] == 'B')
            {
                input[j] = 'B'; input[j-1] = 'G';
                ++j;
            }
        }
    }
    cout<<input<<endl;
}
