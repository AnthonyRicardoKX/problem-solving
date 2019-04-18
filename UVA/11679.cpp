#include <iostream>

using namespace std;

int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int b, n, d, c, v;
    while(cin>>b>>n) {
        bool need = false;
        if (b == 0 && n == 0) return 0;

        int bank[b];
        for(int i = 0; i < b; i++) {
            cin>>bank[i];
        }
        for(int i = 0; i < n; i++) {
            cin>>d>>c>>v;
            bank[d - 1] -= v;
            bank[c - 1] += v;
        }

        for(int i = 0; i < b; i++) {
            if (bank[i] < 0) need = true;
        }

        if (need) cout<<"N"<<endl;
        else cout<<"S"<<endl;
    }
}
