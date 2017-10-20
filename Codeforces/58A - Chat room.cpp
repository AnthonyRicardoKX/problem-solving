#include <bits/stdc++.h>

using namespace std;

int main()
{
    string input;
    string target = "hello";
    cin>>setw(101)>>input;
    int j = 0;
    for(int i = 0; i < input.length(); i++)
    {
        if(input[i] == target[j])
        {
            j++;
        }
    }
    if(j == 5) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
