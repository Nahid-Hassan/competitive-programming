#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    int i , j;
    while(cin>>n && n) {
        int a, b;

        int sqn = sqrt(n);
        bool res = true;

        for(i = 1; i <= sqn; i++) {
            for(j = 0; j <= i - 1; j++) {
                if(n == ((i*i*i)-(j*j*j))) {
                    res = false;
                    break;
                }
            }
            if(res == false) break;
        }
        if(res == false) {
            cout<<i<<" "<<j<<endl;
        } else {
            cout<<"No solution"<<endl;
        }
    }

    return 0;
}
