#include <bits/stdc++.h>
using namespace std;

bool palindrome(string s) {
    string ss = s;
    reverse(s.begin(), s.end());
    if(s.compare(ss) == 0) {
        return true;
    }
    else {
        return false;
    }
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    string s;
    string s1;
    while(cin>>s) {
        set <string> ss;
        int slen = s.size();
        for(int i = 0; i < slen; i++) {
            for(int j = 1; j <= slen; j++) {
                s1 = s.substr(i, j);

                if(palindrome(s1)) {
                    ss.insert(s1);
                }
                if(i == slen - 1) break;
            }
        }
        cout<<"The string "<<"\'"<<s<<"\'"<<" contains "<<ss.size()<<" palindromes."<<endl;
    }

    return 0;
}
