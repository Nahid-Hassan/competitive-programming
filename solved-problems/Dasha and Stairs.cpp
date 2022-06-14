#include <bits/stdc++.h>

#define nl "\n"

using namespace std;

int main() {
    int a,r;

    cin>>a>>r;

//    int s = a + r;
//    int countOdd = 0;
//    for(int i = 1; i <= s; i++) {
//        if(i%2) {
//            countOdd++;
//        }
//    }
    if(a == 0 && r == 0) {
        cout<<"NO"<<nl;
    }
    else if(abs(a-r)>1) {
        cout<<"NO"<<nl;
    }
    else {
        cout<<"YES"<<nl;
    }

    return 0;
}
