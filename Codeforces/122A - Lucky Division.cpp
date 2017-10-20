#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    int arr[] = {4,7,44,47,74,77,444,447,474,744,777,747,774,477};
    cin>>n;
    for(int i = 0; i < (sizeof(arr)/sizeof(arr[0])); i++)
    {
        if(n % arr[i] == 0)
        {
            cout<<"YES"<<endl;
            return 0;
        }
    }
    cout<<"NO"<<endl;
}
