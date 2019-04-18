#include <iostream>

using namespace std;

int main(){
    int d, f;
    float h, u;
    while(cin>>h) {
        if (h == 0) break;
        cin>>u>>d>>f;

        int day = 1;
        float t = 0, lost = u * f / 100;
        while(t < h) {
            t += u;
            if (u > 0) u -= lost;
            if (t > h) break;
            t -= d;
            if (t < 0) break;
            day++;
        }
        if (t < 0) printf("failure on day %d\n", day);
        else printf("success on day %d\n", day);
    }
}
