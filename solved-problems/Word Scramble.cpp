#include <bits/stdc++.h>
using namespace std;

int main() {
    string s, ss;
    bool condition;

    while(getline(cin, s)) {
        condition = false;
        istringstream is(s);

        while(is>>ss) {
            if(condition) cout<<" ";
            condition = true;
            for(int i = ss.size() - 1; i >= 0; i--) cout<<ss[i];
        }
        printf("\n");
    }

    return 0;
}
