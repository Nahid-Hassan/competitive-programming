#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;

    while(cin>>n && n){
        int count = 0;
        for(int i = 1; i <= n; i++) {
            for(int j = i + 1; j <= n; j++) {
                for(int k = j + 1; k <= n; k++) {
                    if(i + j + k < n) {
                        cout<<i<<" "<<j<<" "<<k<<" "<<i + j + k<<endl;
                        count++;
                    }
                    else {
                        goto l1;
                    }
                }
            }
        }
        l1:
        cout<<count<<endl;
    }

    return 0;
}
