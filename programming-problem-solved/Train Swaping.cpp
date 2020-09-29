#include <bits/stdc++.h>

#define nl "\n"

using namespace std;

int main() {
    int tc, n, temp;
    cin>>tc;

    while(tc--) {
        cin>>n;
        int a[n];

        for(int i = 0; i < n; i++) {
            cin>>a[i];
        }
        int swap_c = 0;

        /*Sorting Stage*/
        for(int i = 0; i < n ;i++) {
            for(int j = i + 1; j < n; j++) {
                if(a[i] >= a[j]) {
                   /*swap*/
                   temp = a[j];
                   a[j] = a[i];
                   a[i] = temp;
                   swap_c++;
                }
            }
        }
        cout<<"Optimal train swapping takes "<<swap_c<<" swaps."<<nl;
    }

    return 0;
}
