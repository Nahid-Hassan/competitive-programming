#include <bits/stdc++.h>

#define nl "\n"

using namespace std;

int main( ) {
    int n,max_ = 0, min_ = 1000;
    int max_i, min_i;
    cin>>n;
    int a[n];
    for(int i = 0; i < n; i++) {
        cin>>a[i];
        if(max_ < a[i]) {
            max_ = a[i];
            max_i = i;
        }
        if(min_ >= a[i]) {
            min_ = a[i];
            min_i = i;
        }
    }
    int ans = max_i - 1 + n - min_i;
    if(max_i > min_i){
        ans = ans - 1;
    }
    cout<<ans<<endl;

    return 0;
}
