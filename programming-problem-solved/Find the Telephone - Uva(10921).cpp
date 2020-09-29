#include <bits/stdc++.h>
#include<cstdio>
#include<cstring>

#define nl "\n"
#define gl getline

using namespace std;

int main() {
    char s[50];
    int  i = 0;

    while(cin>>s) {
        int slen = strlen(s);

        for(int i = 0; i < slen; i++) {
            if(s[i] >= 'A' && s[i] <= 'Z') {
                if(s[i] == 'A' || s[i] == 'B' || s[i] == 'C') {
                    cout<<2;
                }
                else if(s[i] == 'D' || s[i] == 'E' || s[i] == 'F') {
                    cout<<3;
                }
                else if(s[i] == 'G' || s[i] == 'H' || s[i] == 'I') {
                    cout<<4;
                }
                else if(s[i] == 'J' || s[i] == 'K' || s[i] == 'L') {
                    cout<<5;
                }
                else if(s[i] == 'M' || s[i] == 'N' || s[i] == 'O') {
                    cout<<6;
                }
                else if(s[i] == 'P' || s[i] == 'Q' || s[i] == 'R' || s[i] == 'S') {
                    cout<<7;
                }
                else if(s[i] == 'T' || s[i] == 'U' || s[i] == 'V') {
                    cout<<8;
                }
                else if(s[i] == 'W' || s[i] == 'X' || s[i] == 'Y' || s[i] == 'Z') {
                    cout<<9;
                }
            }
            else {
                cout<<s[i];
            }
        }
        cout<<nl;
    }

    return 0;
}
//ABC 2
//DEF 3
//GHI 4
//JKL 5
//MNO 6
//PQRS 7
//TUV 8
//WXYZ 9
