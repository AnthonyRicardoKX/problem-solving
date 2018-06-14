#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, ant = 0, dan = 0;
    string bat;
    cin>>n;
    cin>>bat;
    for(int i = 0; i < n; i++) {
        if(bat[i] == 'A') ant++;
        else dan++;
    }
    if (ant > dan) {
        cout<<"Anton"<<endl;
    } else if (ant < dan) {
        cout<<"Danik"<<endl;
    } else {
        cout<<"Friendship"<<endl;
    }
}
