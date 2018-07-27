#include <iostream>

using namespace std;

int main() {
    int k, n, m, x, y;
    while (cin>>k && k != 0) {
        cin>>x>>y;
        for(int i = 0; i < k; i++) {
            cin>>n>>m;
            if (n == x || m == y) {
                cout<<"divisa"<<endl;
            } else if (n > x && m > y) {
                cout<<"NE"<<endl;
            } else if (n > x && m < y) {
                cout<<"SE"<<endl;
            } else if (n < x && m > y) {
                cout<<"NO"<<endl;
            } else {
                cout<<"SO"<<endl;
            }
        }
    }
}
