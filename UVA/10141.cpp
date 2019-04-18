#include <iostream>
#include <stdio.h>

using namespace std;

int main(){
//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);
    int n, p;
    int tc = 1;
    while(cin>>n>>p) {
        if (n == 0 && p == 0) break;
        string parts;
        getchar();
        while(n--) {
            getline(cin, parts);
        }
        string name;
        float cost, best = 0;
        int requirement, met = -1;
        while(p--) {
            getline(cin, parts);
            cin>>cost>>requirement;
            if (requirement > met) {
                met = requirement;
                name = parts;
                best = cost;
            } else if (requirement == met && cost < best) {
                met = requirement;
                name = parts;
                best = cost;
            }

            getchar();
            while(requirement--) {
                getline(cin, parts);
            }
        }

        printf("RFP #%d\n", tc++);
        cout<<name<<endl;
        if (p > 0) cout<<endl;
    }
}
