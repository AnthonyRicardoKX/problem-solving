#include <iostream>
#include <stdio.h>

using namespace std;

int main(){
    int t, a, b;
    cin>>t;
    while(t--) {
        int n;
        bool closed = true;
        cin>>n;
        int gap[n];
        for (int i = 0; i < n; i++) {
            cin>>a>>b;
            gap[i] = abs(a - b);
        }
        int point = gap[n - 1];
        n--;
        while(n--) {
            if (gap[n] != point) closed = false;
        }
        if (closed) cout<<"yes"<<endl;
        else cout<<"no"<<endl;
        if(t) cout<<endl;
    }
}
