/*
/*
It is a simple and easy problem. But has critical test case.
Critical case:
If a number is prime and reverse number is equal to the given number then the output is "prime" not "emirp".
For example:
Given number 11.
11 number is prime. But reverse number is also 11.So, it is not "emirp". It is prime.
*/
*/

#include <bits/stdc++.h>

#define nl "\n"
#define ll long long

using namespace std;

int main() {
    ll n;

    while(cin>>n) {
        if(n<0) {
            cout<<n<<" is not prime."<<nl;
        }
        if(n==1) {
            cout<<n<<" is not prime."<<nl;
        }
        else if(n == 2) {
            cout<<n<<" is emirp"<<nl;
        }
        else if(n > 2) {
            ll sqn = sqrt(n) + 1;
            int checkIsPrime = 0;

            for(int i = 2; i <= sqn; i++) {
                if(n % i == 0) {
                    checkIsPrime = 1;
                }
            }
            if(checkIsPrime) {
                cout<<n<<" is not prime."<<nl;
            }
            else {
                ll x = n;

                stringstream ss;
                ss << x;

                string str;
                ss >> str;

                reverse(str.begin(), str.end());

                ss.clear();

                ss << str;
                ss >> x;
                if(x == n) {
                    cout<<n<<" is prime."<<nl;
                }
                else {
                    int checkIsPrime1 = 0;

                    for(int i = 2; i <= sqrt(x) + 1; i++) {
                        if(x % i == 0) {
                            checkIsPrime1 = 1;
                        }
                    }
                    if(checkIsPrime1) {
                        cout<<n<<" is prime."<<nl;
                    }
                    else {
                        cout<<n<<" is emirp."<<nl;
                    }
                }
            }
        }
    }


    return 0;
}
///How to make integer revers:
/*
#include <iostream>
#include <string>
#include <sstream>
#include <algorithm>

using namespace std;

int main()
{
    int x = 123;

    stringstream ss;
    ss << x;

    string str;
    ss >> str;

    reverse(str.begin(), str.end());

    ss.clear();

    ss << str;
    ss >> x;

    cout << x << '\n';
}


*/
