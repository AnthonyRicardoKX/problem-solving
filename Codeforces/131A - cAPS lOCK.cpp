#include <bits/stdc++.h>

using namespace std;

int main()
{
    string input;
    cin>>setw(100)>>input;
    bool firstlow = false, onlyup = true;
    if (islower(input[0])) firstlow = true;
    for(int i = 1; i < input.length(); i++)
    {
        if (islower(input[i]))
        {
            onlyup = false;
            break;
        }
    }
    for(int i = 0; i < input.length(); i++)
    {
        if (!onlyup) break;
        if (islower(input[i])) input[i] = toupper(input[i]);
        else input[i] = tolower(input[i]);
    }
    cout<<input<<endl;
}
