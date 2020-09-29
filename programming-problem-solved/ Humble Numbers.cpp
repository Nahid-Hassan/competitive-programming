#include <bits/stdc++.h>

#define nl "\n"
#define ll long long

using namespace std;

int main() {
    int n;

    ll humbleN[5850];


    /*Generate Humble Number*/
    humbleN[1] = 1; /*first humble number*/

    int w = 1, x = 1, y = 1, z = 1;

    for(int i = 2; i <= 5850; i++) {
        humbleN[i] = min(min(2 * humbleN[w], 3 * humbleN[x]), min(5 * humbleN[y], 7 * humbleN[z]));

        if(humbleN[i] == 2 * humbleN[w]) {
            w++;
        }
        if(humbleN[i] == 3 * humbleN[x]) {
            x++;
        }
        if(humbleN[i] == 5 * humbleN[y]) {
            y++;
        }
        if(humbleN[i] == 7 * humbleN[z]) {
            z++;
        }
    }
    /*1 -- >st, 2 --> nd, 3 --> rd, or others(4,5,6,7,8,9) --> th*/
    while(cin>>n && n) {
        if(n % 100 > 10 && n % 100 < 20) {
            cout<<"The "<<n<<"th humble number is "<<humbleN[n]<<"."<<nl;
        }
        else if(n % 10 == 1) {
            cout<<"The "<<n<<"st humble number is "<<humbleN[n]<<"."<<nl;
        }
        else if(n % 10 == 2) {
            cout<<"The "<<n<<"nd humble number is "<<humbleN[n]<<"."<<nl;
        }
        else if(n % 10 == 3) {
            cout<<"The "<<n<<"rd humble number is "<<humbleN[n]<<"."<<nl;
        }
        else {
            cout<<"The "<<n<<"th humble number is "<<humbleN[n]<<"."<<nl;
        }
    }

    return 0;
}
