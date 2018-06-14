#include <bits/stdc++.h>

using namespace std;

int main()
{
    string input;
    int cap = 0;
    cin>>input;
    for(int i = 0; i < input.length(); i++) {
        if (isupper(input[i])) cap++;
    }
    if (cap > input.length() / 2) {
        transform(input.begin(), input.end(), input.begin(), ::toupper);
    } else {
        transform(input.begin(), input.end(), input.begin(), ::tolower);
    }
    cout<<input<<endl;
}
