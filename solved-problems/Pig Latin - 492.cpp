#include <bits/stdc++.h>
using namespace std; 

#define input_file() freopen("in.txt", "rt", stdin);

int main() {
    //input_file();
    string vowel = "aAeEiIoOuU";
    string s;

    while(getline(cin, s)) {
        for(int  i = 0; i < s.size(); i++) {
            if(isalpha(s[i])) {
                char ch = s[i];

                if(vowel.find(ch) != -1) {
                    cout << ch;
                }
                ++i;
                for(; i < s.size() && isalpha(s[i]); ++i) {
                    cout << s[i];
                }
                if(vowel.find(ch) == -1) {
                    cout << ch;
                }
                cout << "ay";   
                i--;
            } else {
                cout << s[i];
            }
        }
        cout << endl;
    }

    return 0;
}