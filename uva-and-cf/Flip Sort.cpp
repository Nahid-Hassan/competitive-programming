#include <bits/stdc++.h>

#define nl "\n"

using namespace std;

int main() {
    int n,temp;

    while(scanf("%d",&n) == 1) {
        int a[n];

        for(int i = 0; i < n; i++) {
            cin>>a[i];
        }
        int swap_c = 0;

        /*Sorting Stage*/
        for(int i = 0; i < n ;i++) {
            for(int j = i + 1; j < n; j++) {
                if(a[i] > a[j]) {
                   /*swap*/
//                   temp = a[j];
//                   a[j] = a[i];
//                   a[i] = temp;
                   swap_c++;
                }
            }
        }
        cout<<"Minimum exchange operations : "<<swap_c<<nl;
    }

    return 0;
}
