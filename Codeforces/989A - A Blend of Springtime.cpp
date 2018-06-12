#include <bits/stdc++.h>

using namespace std;

int main()
{
    string input;
    bool possible = false;
    cin>>input;
    for(int i = 1; i < input.length() - 1; i++) {
        if (input[i-1] != input[i] && input[i] != input[i+1] && input[i+1] != input[i-1] && input[i-1] != '.' && input[i] != '.' && input[i+1] != '.') possible = true;
    }
    cout<<((possible)?"Yes":"No")<<endl;
}
