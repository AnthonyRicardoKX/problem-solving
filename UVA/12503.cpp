#include <iostream>

using namespace std;

int main(){
    int t, n, op[101], comm3;
    string comm, comm2;
    cin>>t;
    while(t--) {
        cin>>n;
        getchar();
        for(int i = 0; i < n; i++) {
            cin>>comm;
            if (comm == "LEFT") op[i] = -1;
            else if (comm == "RIGHT") op[i] = 1;
            else {
                cin>>comm2>>comm3;
                op[i] = op[comm3 - 1];
            }
        }
        int res = 0;
        for(int i = 0; i < n; i++) {
            res += op[i];
        }
        cout<<res<<endl;
    }
}
