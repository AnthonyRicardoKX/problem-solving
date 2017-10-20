#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n], total = 0;
    for(int i = 0; i < n; i++)
    {
        cin>>arr[i];
        total += arr[i];
    }
    sort(arr, arr+n);
    --n;
    int coin = 0, target = ((total%2 == 0)?ceil(total/2):ceil(total/2)+1);
    while(total >= target)
    {
        if(n == -1) break;
        total -= arr[n];
        coin++;
        n--;
    }
    cout<<coin<<endl;
}
