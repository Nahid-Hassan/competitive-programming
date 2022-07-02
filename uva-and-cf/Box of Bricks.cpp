#include <bits/stdc++.h>

#define nl "\n"

using namespace std;

int main() {
    int n;
    int i = 0;
    while(cin>>n && n) {
        int a[n];
        int avg = 0;
        for(int i = 0; i < n; i++) {
            cin>>a[i];
            avg += a[i];
        }
        avg = avg / n;
        int min_avg = 0;
        for(int i = 0; i < n; i++) {
            min_avg +=abs(avg - a[i]);
        }
        cout<<"Set #"<<++i<<nl;
        cout<<"The minimum number of moves is "<<min_avg / 2<<"."<<nl;
        cout<<nl;
    }

    return 0;
}
