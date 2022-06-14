#include <bits/stdc++.h>
#include <cstring>

#define nl "\n";
#define ll long long

using namespace std;

int main() {
    ll n, i, bi[100];

    while(cin>>n && n != 0) {
        i = 0;

        ll temp = n,countOne = 0;

        while(temp>0) {
            bi[i] = temp%2;
            temp = temp / 2;
            i++;
        }
        cout<<"The parity of ";
        for(int j = i-1; j >= 0; j--) {
            cout<<bi[j];
            if(bi[j] == 1) countOne++;
        }
        cout<<" is "<<countOne<<" (mod 2)."<<nl;

    }
    return 0;
}
