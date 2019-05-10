// Author: nahid.cseru@gmail.com
#include <bits/stdc++.h>
using namespace std;

void computeLPS(string pat, int patSize, int lps[]);

void kmpSearch(string txt, string pat) {
    int txtSize = txt.size();
    int patSize = pat.size();

    int lps[patSize];
    computeLPS(pat, patSize, lps);
    for(int i = 0; i < patSize; i++) {
        cout << lps[i] << " ";
    } cout << endl;

    int i = 0;
    int j = 0;

    while(i < txtSize) {
        if (pat[j] == txt[i]) {
            j++; i++;
        }
        if(j == patSize) {
            cout << "Found pattern at index " << i - j << "." << endl;
            j = lps[j - 1];
        } else if (i < txtSize && pat[j] != txt[i]) {
            if (j != 0) {
                j = lps[j - 1];
            } else {
                i++;
            }
        }
    }
}

void computeLPS(string pat, int patSize, int lps[]) {
    int len = 0;

    lps[0] = 0;
    int i = 1;

    //The loop calculates lps[i] for i = 1 to patSize - 1
    while(i < patSize) {
        if(pat[i] == pat[len]) {
            len++;
            lps[i] = len;
            i++;
        } else {
            if(len != 0) {
                // we do not increment i here
                len = lps[len - 1];
            } else {
                lps[i] = 0;
                i++;
            }
        }
    }
}

int main() {
    string txt = "AABAACAADAABAABA";
    string pat = "ABABCABAB";

    kmpSearch(txt, pat);

    return 0;
}
