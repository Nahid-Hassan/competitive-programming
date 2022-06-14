//Author: nahid.cseru@gmail.com
#include <bits/stdc++.h>
using namespace std;

#define input_file() freopen("in.txt", "rt", stdin);

int main() {
    //input_file();
    string Qwerty = "`1234567890-=qwertyuiop[]\\asdfghjkl;'zxcvbnm,./ ~!@#$%^&*()_+QWERTYUIOP{}|ASDFGHJKL:\"ZXCVBNM<>?";
    string Dvorak = "`123qjlmfp/[]456.orsuyb;=\\789aehtdck-0zx,inwvg' ~!@#QJLMFP?{}$%^>ORSUYB:+|&*(AEHTDCK_)ZX<INWVG\"";

    string s;
    while(getline(cin, s)) {
        for(int i = 0; i < s.size(); i++) {
            int idx = Qwerty.find(s[i]);
            cout << Dvorak[idx];
        }
        cout << endl;
    }

    return 0;
}