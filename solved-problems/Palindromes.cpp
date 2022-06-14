#include <bits/stdc++.h>
using namespace std;

#define nl "\n"

bool mirrorPalindrome(string s) {
    bool t = false;
    for(int i = 0; i < s.size(); i++) {
        if (s[i] == '2') {
            s[i] = 'S';
            t = true;
        } else if (s[i] == '3') {
           s[i] = 'E';
           t = true;
        } else if (s[i] == '5') {
            s[i] = 'Z';
            t = true;
        } else if(s[i] == 'J') {
            s[i] = 'L';
            t = true;
        } else if(s[i] == 'O') {
            s[i] = 'O';
            t = true;
        } else if(s[i] == '0') {
            s[i] = 'O';
            t = true;
        }
    }

    string ss = s;
    reverse(s.begin(), s.end());

    if(s.compare(ss) == 0 && t == true) {
        return true;
    }
    else {
        return false;
    }
}

bool palindrome(string s) {
    string ss;
    ss = s;
    reverse(s.begin(), s.end());
    if(s.compare(ss) == 0) {
        return true;
    }
    else {
        return false;
    }
}

int main() {
    freopen("in.txt", "rt", stdin);
    string s;

    while(cin>>s) {
        bool sr, sm;

        sr = palindrome(s);
        sm = mirrorPalindrome(s);

        if(sr && sm) {
            cout<<s<<" -- is a mirrored palindrome.\n\n";
        } else if (sr == 1 && sm == 0) {
            cout<<s<<" -- is a regular palindrome.\n\n";
        } else if (sr == 0 && sm == 1) {
            cout<<s<<"  -- is a mirrored string.\n\n";
        } else {
            cout<<s<<" -- is not a palindrome.\n\n";
        }


    }

    return 0;
}
/*
#include<cstdio>
#include<iostream>
#include<map>

using namespace std;

map<char, char> m;

string line;
string s = "ABCDEFGHIJKLMNOPQRSTUVWXYZ123456789";
string r = "A   3  HIL JM O   2TUVWXY51SE Z  8 ";

bool mirrored(string a) {
    for(int i = 0; i < a.length() / 2 + a.length() % 2; i++) {
        if(a[a.length() - 1 - i] != m[a[i]])
            return false;
    }
    return true;
}

bool palindrome(string a) {
    for(int i = 0; i < a.length() / 2; i++) {
        if(a[a.length() - i - 1] != a[i])
            return false;
    }
    return true;
}

int main() {
    for(int i = 0; i < s.length(); i++)
        m[s[i]] = r[i];

    while(cin >> line) {
        bool mi = mirrored(line);
        bool pa = palindrome(line);

        if(!mi && !pa)
            printf("%s -- is not a palindrome.\n", line.c_str());
        else if(!mi && pa)
            printf("%s -- is a regular palindrome.\n", line.c_str());
        else if(mi && !pa)
            printf("%s -- is a mirrored string.\n", line.c_str());
        else
            printf("%s -- is a mirrored palindrome.\n", line.c_str());
        printf("\n");
    }
}
*/
