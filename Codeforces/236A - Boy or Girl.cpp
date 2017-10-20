#include <bits/stdc++.h>

using namespace std;

int main()
{
    char input[101] = {};
    cin>>setw(101)>>input;
    sort(input, input+strlen(input));
    int num = 1;
    for(int i = 1; i < strlen(input); i++)
    {
        if (input[i] != input[i-1])
        {
            num++;
        }
    }
    if (num % 2 == 0) cout<<"CHAT WITH HER!"<<endl;
    else cout<<"IGNORE HIM!"<<endl;
}
