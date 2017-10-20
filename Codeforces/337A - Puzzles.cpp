#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m;
    cin>>n>>m;
    int arr[m];
    for(int i = 0; i < m; i++)
    {
        cin>>arr[i];
    }
    sort(arr, arr+m);
    unsigned long long mini = -1, total;
    for(int i = 0; i < m - n; i++)
    {
        total = 0;
        for(int j = 0; j < n; j++)
        {
            total += abs(arr[i+j]-arr[i+j+1]);
        }
        mini = min(total, mini);
    }
    cout<<mini<<endl;
}
