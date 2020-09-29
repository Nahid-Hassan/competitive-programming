#include <bits/stdc++.h>

#define nl "\n"

using namespace std;

int main() {
    int n;
    double p;

    while (cin >> n >> p) {
        double sol = exp(log(p) / n);
        printf("%.0f\n", sol);
    }


    return 0;
}
/*
k^{n}=p

is equivalent to

\ln {k^{n}}=\ln {p}

which is simply

n\ln {k}=\ln {p}

or

\ln {k}={\frac  {\ln {p}}{n}}

thus k is:

k=e^{{({\frac  {\ln {p}}{n}})}}


*/
