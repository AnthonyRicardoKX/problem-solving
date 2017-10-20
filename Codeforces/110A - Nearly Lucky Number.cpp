#include <bits/stdc++.h>

using namespace std;

int main()
{
    string input;
    int arr[] = {4,7,44,47,74,77,444,447,474,744,777,747,774,477};
    cin>>input;
    int luc = 0;
    for(int i = 0; i < input.length(); i++)
    {
        if(input[i] == '4' || input[i] == '7') luc++;
    }
    for(int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++)
    {
        if(luc == arr[i])
        {
            cout<<"YES"<<endl;
            return 0;
        }
    }
    cout<<"NO"<<endl;
}
