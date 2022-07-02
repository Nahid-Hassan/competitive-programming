#include <bits/stdc++.h>
using namespace std;

int main() {
    int testCase;

    cin>>testCase;

    while(testCase--) {
        int n, mx = -160000, mxDiff = -160000; //n stands for number of students
        cin>>n;

        int a[n];
        for(int i = 0; i < n; i++) cin>>a[i];

        for(int i = 0; i < n - 1; i++) {
            if(a[i] > mx) mx = a[i];
            if(mx - a[i+1] > mxDiff) mxDiff = mx - a[i + 1];
        }
        cout<<mxDiff<<endl;
    }

    return 0;
}
