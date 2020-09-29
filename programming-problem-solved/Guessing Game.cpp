#include <bits/stdc++.h>
using namespace std;

int main() {
    //freopen("in.txt","rt",stdin);
    int n;
    string s;

    int low = 1, upper = 10;
    while(cin>>n && n) {
        cin.ignore();
        getline(cin, s);

        if (s == "too high") {
            upper = min(upper, n - 1);
        } else if (s == "too low") {
            low = max(low, n + 1);
        } else if(s == "right on") {
            if(upper >= n && low <= n) {
                cout<<"Stan may be honest"<<endl;
            } else {
                cout<<"Stan is dishonest"<<endl;
            }
            low = 1;
            upper  = 10;
        }
    }

    return 0;
}
