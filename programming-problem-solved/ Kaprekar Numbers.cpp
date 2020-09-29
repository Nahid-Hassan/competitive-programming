#include <bits/stdc++.h>

#define nl "\n"
#define ll long long

using namespace std;

int main() {
    int tc;

    cin>>tc;

    /*kaprekar numbers*/
    vector <int> kn = {1, 9, 45, 55, 99, 297, 703, 999, 2223, 2728, 4879, 4950, 5050, 5292, 7272, 7777, 9999, 17344, 22222, 38962, 77778, 82656, 95121, 99999, 142857, 148149, 181819, 187110, 208495, 318682, 329967, 351352, 356643, 390313, 461539};


    for(int casen = 1; casen <= tc; casen++) {
        int lower, upper;
        cin>>lower>>upper;
        int found = false;
        if(casen == 1) {
            cout<<"case #"<<casen<<nl;
        }
        else {
            cout<<nl<<"case #"<<casen<<nl;
        }

        for(int i = 0; i < kn.size(); i++) {
            if(kn[i] >= lower && kn[i] <= upper) {
                cout<<kn[i]<<nl;
                found =true;
            }
            if(kn[i] >= upper) {
                break;
            }
        }
        if(found == false) {
            cout<<"no kaprekar numbers"<<nl;
        }

    }

    return 0;
}
