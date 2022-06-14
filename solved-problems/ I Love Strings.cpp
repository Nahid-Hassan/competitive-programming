#include <bits/stdc++.h>
using namespace std;

#define mx 1020

void LPS(string pat, int patlen, int lps[mx]);

bool search(string txt, string pat) {
    int txtlen = txt.size();
    int patlen = pat.size();

    int lps[mx];
    LPS(pat, patlen, lps );

   int i = 0;
   int j = 0;
    while(i < txtlen) {
        if(pat[j] == txt[i]) {
            i++; j++;
        }
        if(j == patlen) {
            return true;
            j = lps[j - 1];
        } else if(i < txtlen && pat[j] != txt[i]) {
            if(j != 0) {
                j = lps[j - 1];
            } else {
                i++;
            }
        }
    }
    return false;
}

void LPS(string pat, int patlen, int lps[mx]) {
    int len = 0;
    lps[0] = 0;

    int i = 1;
    while(i < patlen) {
        if(pat[i] == pat[len]) {
            len++;
            pat[i] = len;
            i++;
        } else {
            if(len != 0) {
                len = lps[len-1];
            } else {
                lps[i] = 0;
                i++;
            }
        }
    }
}

int main() {
    int tc,q;
    string txt, pat;

    scanf("%d",&tc);
    while(tc--) {
        cin>>txt;

        scanf("%d", &q);
        for(int i = 1; i <= q; i++) {
            cin>>pat;
            if(txt.size() < pat.size()) {
                cout<<"n"<<endl;
            } else {
                cout << (search(txt, pat) ? "y" : "n") << endl;
            }
        }
    }

    return 0;
}
