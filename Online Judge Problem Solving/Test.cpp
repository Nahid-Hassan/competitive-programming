#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    
    getline(cin, s);
    getline(cin, s);

    while(s[0] == '|') {
        unsigned int m = 0;
        unsigned int bit = 128;

        for(int i = 0; i < s.size(); i++) {
            if(s[i] == ' ') {
                bit >>= 1;
            } else if(s[i] == 'o') {
                m += bit;
                bit >>= 1;
            }
        }
        printf("%c", m);
        getline(cin, s);
    }

    return 0;
}