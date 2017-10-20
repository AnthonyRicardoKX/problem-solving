#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, arr[100000] = {};
    cin>>n;
    for(int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    sort(arr, arr+n);
    int value = 0, car = 0, j = 0;
    --n;
    while(j <= n)
    {
        if (value == 0) value = arr[n];
        if (j == n && value != 0)
        {
            car++; break;
        }
        if (value == 4)
        {
            n--; car++;
            value = 0;
        }
        else if (value + arr[j] == 4)
        {
            j++; n--; car++;
            value = 0;
        }
        else if (value + arr[j] < 4)
        {
            value += arr[j];
            j++;
        }
        else if (value + arr[j] > 4)
        {
            n--; car++;
            value = 0;
        }
    }
    cout<<car<<endl;
}
