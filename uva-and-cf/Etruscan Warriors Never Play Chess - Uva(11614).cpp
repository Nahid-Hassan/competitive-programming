#include <bits/stdc++.h>

#define nl "\n"
#define ull unsigned long long
#define dl double

using namespace std;

int main() {
    ull tc;
    cin>>tc;

    while(tc--) {
        dl n;

        cin>>n;

        dl ans = sqrt (1 + (8 * n));
        int res = (int) ((--ans)/2);

        cout<<res<<nl;
    }

    return 0;
}
///Solving algorithm:
/**
Simple math problem

n*(n+1)/2 = s
n^2+n=2*s
n^2+n+(-2*s)=0

Using quadratic equation ax^2+bx+c=0

del = sqrt(b*b-4*a*c) = sqrt(1-4*1*(-2s)) = sqrt(1+8s)
we know x = (-b(+-) del)/2a

Here i use only + value because del is always positive

so n = (-1+sqrt(1+8s))/2

Input as double s
then print n (where n is convert from double to long)
**/

///get TLE
//#include <bits/stdc++.h>
//
//#define nl "\n"
//#define ull unsigned long long
//
//using namespace std;
//
//int main() {
//    ull count, tc, n, i, total;
//    cin>>tc;
//
//    while(tc--) {
//        cin>>n;
//
//        count = 0;
//        total = 0;
//        i = 0;
//
//        while(true) {
//            i++;
//            ull term = (i *(i + 1)) / 2;
//            if(term <= n && (n - term) >= 0) {
//                count++;
//            }
//            else break;
//        }
//        cout<<count<<nl;
//    }
//
//    return 0;
//}
