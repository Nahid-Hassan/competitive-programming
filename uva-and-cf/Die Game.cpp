#include <bits/stdc++.h>
using namespace std;

int main() {
    int tc;
    //freopen("in.txt","rt",stdin);

    while(cin>>tc && tc) {
        int top = 1;
        int north = 2;
        int west = 3;

        while(tc--) {
            string s;
            cin>>s;

            int ltop = top;

            if(s == "north") {
                top = 7 - north;
                north = ltop;
            } else if (s == "south") {
                top = north;
                north = 7 - ltop;
            } else if (s == "west") {
                top = 7 - west;
                west = ltop;
            } else if (s == "east") {
                top = west;
                west = 7 - ltop;
            }
        }
        cout<<top<<endl;
    }

    return 0;
}
