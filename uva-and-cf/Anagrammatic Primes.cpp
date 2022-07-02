#include <bits/stdc++.h>

#define nl "\n"

using namespace std;

int main() {
    int aplist[] = {2, 3, 5, 7, 11, 13, 17, 31, 37, 71, 73, 79, 97, 113, 131, 199, 311, 337, 373, 733, 919, 991};

    int n, notFound;

    while(cin>>n && n) {
        notFound = true;
        if(n == 7 || n == 8 || n == 9) {
            cout<<0<<nl;
            notFound = false;
        }
        else {
            for(int i = 0; i < 22; i++) {
                if(aplist[i] > n) {
                    cout<<aplist[i]<<nl;
                    notFound = false;
                    break;
                }
            }
        }
        if(notFound) {
            cout<<0<<nl;
        }
    }

    return 0;
}
