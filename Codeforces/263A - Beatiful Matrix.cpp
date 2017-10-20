#include <bits/stdc++.h>

using namespace std;

int main()
{
    bool matrix[5][5] = {};
    int tx, ty;
    for(int i = 0; i < 5; i++)
    {
        for(int j = 0; j < 5; j++)
        {
            cin>>matrix[i][j];
            if (matrix[i][j] == true)
            {
                tx = i; ty = j;
            }
        }
    }
    cout<<abs(tx-2)+abs(ty-2)<<endl;
}
