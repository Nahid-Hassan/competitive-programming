#include <bits/stdc++.h>
using namespace std;

int main() {
    double ncow, ncar, nshow;

    while(cin>>ncow>>ncar>>nshow) {
        double fcase = ((ncow/(ncow + ncar)) * (ncar / (ncar + ncow  - nshow - 1)));
        double scase = ((ncar/(ncow + ncar)) * ((ncar - 1) / (ncar + ncow  - nshow - 1)));
        printf("%.5lf\n",fcase + scase);
    }

    return 0;
}
