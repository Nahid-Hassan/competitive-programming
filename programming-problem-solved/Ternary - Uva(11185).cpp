#include <bits/stdc++.h>
#include <cstring>

#define nl "\n";

using namespace std;

int main() {
    int n, i, ter[100];

    while(cin>>n && (n>=0)) {
        i = 0;
        int temp = n;
        if(temp == 0) {
            cout<<0<<nl;
        }
        else {
            while(temp>0) {
                ter[i] = temp%3;
                temp = temp / 3;
                i++;
            }
            for(int j = i-1; j >= 0; j--) {
                cout<<ter[j];
            }
            cout<<nl;
        }
    }
    return 0;
}
/*
#include <bits/stdc++.h>

#define ll long long
#define nl "\n"

using namespace std;

int main() {
    int n;
    char ter[100];

    while(cin>>n && (n >= 0)) {
        if(n == 0) cout<<0<<nl;
        else if(n == 1) cout<<1<<nl;
        else if(n == 2) cout<<2<<nl;
        else if(n == 3) cout<<10<<nl;
        else {
            int temp = n, i = 0;
            while(temp>3) {
                ter[i] = temp % 3;
                temp /= 3;
                cout<<"ter["<<i<<"]"<<ter[i];
                i++;
            }
            int terlen = strlen(ter);
            if(temp == 3) {
                printf("10");
                for(int j = terlen - 1; j >=0 ; j--){
                    cout<<ter[j];
                }
                cout<<nl;
            } else if(temp == 2) {
                printf("2");
                for(int j = terlen - 1; j >=0 ; j--){
                    cout<<ter[j];
                }
                cout<<nl;
            } else if(temp == 1) {
                printf("1");
                for(int j = terlen - 1; j >=0 ; j--){
                    cout<<ter[j];
                }
                cout<<nl;
            } else if(temp == 0) {
                printf("0");
                for(int j = terlen - 1; j >=0 ; j--){
                    cout<<ter[j];
                }
                cout<<nl;
            }
        }
    }

    return 0;
}

*/
