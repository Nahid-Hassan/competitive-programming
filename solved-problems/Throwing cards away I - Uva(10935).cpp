#include <bits/stdc++.h>

#define nl "\n"

using namespace std;

int main() {
    int n, b;

    while(cin>>n && n !=0) {
        if(n == 1) {
            cout<<"Discarded cards:"<<nl;
            cout<<"Remaining card: 1"<<nl;
        }
        else {
            queue <int> q;
            cout<<"Discarded cards:";
            for(int i = 1; i <= n; i++) {
                q.push(i);
            }
            while(q.size() > 1) {
                int a = q.front();
                if(q.size() == 2) {
                    cout<<" "<<a;
                }
                else {
                    cout<<" "<<a<<",";
                }
                q.pop();
                b = q.front();
                q.push(b);
                q.pop();
            }
            int z = q.front();
            cout<<nl;
            cout<<"Remaining card:"<<" "<<z<<nl;
        }
    }
    return 0;
}

