#include <bits/stdc++.h>
using namespace std;

//string l1 = "`1234567890-=";
//string l2 = "qwertyuiop[]\";
//string l3 = "asdfghjkl;'";
//string l4 = "zxcvbnm,./";

string ss = "`1234567890-=qwertyuiop[]asdfghjkl;'zxcvbnm,./`1234567890-=QWERTYUIOP[]ASDFGHJKL;'ZXCVBNM,./";

int main() {
    string s;

    getline(cin, s);
    for(int i = 0; i < s.size(); i++) {
        if(s[i] != ' '){
            int m = ss.find(s[i]);
            m = m - 2;
            putchar(tolower(ss[m]));
        } else {
            cout<<" ";
        }
    }
    cout<<endl;

    return 0;
}
