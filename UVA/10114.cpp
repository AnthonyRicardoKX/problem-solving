#include <iostream>

using namespace std;

int main(){
    int dur, depre;
    double down, loan, depreVal[101];
    while(cin>>dur>>down>>loan>>depre) {
        if (dur < 0) break;

        int month;
        double val;

        for (int i = 0; i < depre; i++) {
            cin>>month>>val;
            for (int j = month; j < 101; j++) {
                depreVal[j] = val;
            }
        }

        int currMonth = 0;
        double pay = loan / dur;
        double car = (loan + down) * (1 - depreVal[0]);
        while (car < loan) {
            currMonth++;
            loan -= pay;
            car = car * (1 - depreVal[currMonth]);
        }

        if (currMonth == 1) printf("%d month\n", currMonth);
        else printf("%d months\n", currMonth);
    }
}
