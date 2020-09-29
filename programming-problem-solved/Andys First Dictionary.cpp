#include <bits/stdc++.h>
using namespace std;

int main() {
    set<string>ss;
    set<string>::iterator it;
    string s;

    while(cin>>s) {
        int slen = s.size();

        string p = "";
        for(int i = 0; i <= slen; i++) {
            if(isalpha(s[i])) {
                p += tolower(s[i]);
            } else if(p != "") {
                ss.insert(p);
                p = "";
            }
        }
    }
    for(it = ss.begin(); it != ss.end(); it++) {
            cout<<*it<<endl;
    }
}

