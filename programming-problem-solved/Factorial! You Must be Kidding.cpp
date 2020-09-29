#include <bits/stdc++.h>
#include <cstdio>

#define nl "\n"
#define ull unsigned long long

using namespace std;

//int factorial(ll n)
//{
//  return (n == 1 || n == 0) ? 1 : factorial(n - 1) * n;
//}



int main() {
    int n;
    int c;
    while(scanf("%d",&n)==1) {
        ull ans = 1, sum = 0;
        c = 0;
        if(n >= 0 && n <= 7) {
            cout<<"Underflow!"<<nl;
        }
        else if(n > 13) {
            cout<<"Overflow!"<<nl;
        }
        else if(n < 0 ) {
            int absn = abs(n);
            if(absn % 2 == 0) {
                cout<<"Underflow!"<<nl;
            }
            else {
                cout<<"Overflow!"<<nl;
            }
        }
        else {
            while(n>0) {
                sum = ans*n;
                n--;
                ans = sum;
            }
            cout<<sum<<nl;
        }
    }


    return 0;
}
/*
Though negative factorial are normally undefined this problem stretches the limit of well-known definitions.

For this problem, we have F(n)=n*F(n-1), and F(0)=1. With some manipulations, for negative factorials,
we can get:  F(0)=0*F(-1), or F(-1)={\frac  {F(0)}{0}}=\infty .
Continuing on this logic:  F(-1)=-1*F(-2), or F(-2)=-F(-1). Similarly, {\frac  {F(-1)}{-1}}=F(-3)=-F(-2).

To ignore all the non-sense, if the input is between 8 to 13, print n!.
It's always overflow if n\geq 14, and always underflow from 0 to 7.
For negative numbers, negative odd numbers are overflows, and negative even numbers are underflows.
*/
/*
#include <iostream>
using namespace std;

#define datatype signed long long int
#define Max 6227020800
#define Min 10000

int main() {
	datatype f[101];
	f[0] = 1;
	datatype n = 0;
	while (f[n] <= Max) {
		n++;
		f[n] = n * f[n - 1];
	}

	datatype i;
	while (cin >> i) {
		if (i < 0) {
			bool even = (i % 2 == 0);
			cout << (even ? "Underflow!" : "Overflow!") << endl;
		} else if (i >= n)
			cout << "Overflow!" << endl;
		else if (f[i] < Min)
			cout << "Underflow!" << endl;
		else
			cout << f[i] << endl;
	}
	return 0;
}
*/
