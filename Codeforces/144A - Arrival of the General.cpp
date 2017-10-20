#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n] = {};
    int maxi = -1, mini = INT_MAX;
    int maxpos = 0, minpos = 0;
    for(int i = 0; i < n; i++)
    {
        cin>>arr[i];
        if (arr[i] > maxi)
        {
            maxi = arr[i];
            maxpos = i;
        }
        if (arr[i] <= mini)
        {
            mini = arr[i];
            minpos = i;
        }

    }
    int cond = (minpos < maxpos)?-1:0;
    int ans = (n - (minpos + 1)) + (maxpos + cond);
    cout<<ans<<endl;
}
