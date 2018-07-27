#include <iostream>

using namespace std;

int main(){
    int n, b, h, w;
    while(cin>>n>>b>>h>>w) {
        int res = 0;
        for (int i = 0; i < h; i++) {
            int cost, space;
            cin>>cost;
            for (int j = 0; j < w; j++) {
                cin>>space;
                if (space >= n) {
                    if (res == 0) res = cost * n;
                    else {
                        res = min(res, cost * n);
                    }
                }
            }
        }
        if (res <= b && res != 0) cout<<res<<endl;
        else cout<<"stay home"<<endl;
    }

    return 0;
}
