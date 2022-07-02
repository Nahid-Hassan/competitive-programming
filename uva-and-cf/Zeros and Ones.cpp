#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;

    int casen = 1;
    while(cin>>s) {
        int n;
        cin>>n;

        cout<<"Case "<<casen++<<":"<<endl;
        int a, b;
        bool t;
        while(n--) {
            cin>>a>>b;

            if(a > b) {
                swap(a,b);
            }
            if(a == b) {
                cout<<"Yes"<<endl;
                continue;
            }
            for(int i = a; i < b; i++) {
                if(s[i] == s[i+1]) {
                    t = true;
                } else {
                    t = false;
                    break;
                }
            }
            if(t) {
                cout<<"Yes"<<endl;
            } else {
                cout<<"No"<<endl;
            }
        }
    }

    return 0;
}
