#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

int main() {
    int t, arr[3] = {0};
    cin>>t;
    for(int i = 0; i < t; i++) {
        cin>>arr[0]>>arr[1]>>arr[2];

        sort(arr, arr + 3);
        printf("Case %d: %d\n", i + 1, arr[1]);
    }
}
