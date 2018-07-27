#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int t, n;
    cin>>t;
    for (int i = 0; i < t; i++) {
        cin>>n;
        int arr[n] = {0};
        for (int j = 0; j < n; j++) {
            cin>>arr[j];
        }
        sort(arr, arr + n);
        printf("Case %d: %d\n", i + 1, arr[n - 1]);
    }
}
