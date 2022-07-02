#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b, c, casen = 1;

    while(cin>>a>>b && a && b) {
        vector <int> v;
        vector <int>::iterator it;

        cout<<"CASE# "<<casen++<<":"<<endl;

        for(int i = 0; i < a; i++) {
            cin>>c;
            v.push_back(c);
        }
        sort(v.begin(), v.end());
        for(int i = 1; i <= b; i++) {
            cin>>c;

            it = lower_bound(v.begin(), v.end(), c);

            if(*it == c) cout<<c<<" found at "<<it - v.begin() + 1<<endl;
            else cout<<c<<" not found"<<endl;
        }
    }

    return 0;
}

