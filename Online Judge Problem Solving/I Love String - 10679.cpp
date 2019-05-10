#include <bits/stdc++.h>
using namespace std;

#define input_file() freopen("in.txt", "rt", stdin);
int input() {int n; cin >> n; return n;}

void computeLPS(string subString, int subSize, int lps[]) {
    int len = 0;
    lps[0] = 0;
    int i = 1;

    while(i < subSize) {
        if (subString[i] == subString[len]) {
            len++;
            lps[i] = len;
            i++;
        } else {
            if (len != 0) {
                len = lps[len - 1];
            } else {
                lps[i] = 0;
                i++;
            }
        }
    }
}

bool kmpSearch(string mainString, string subString) {
    int mainSize = mainString.size();
    int subSize = subString.size();

    int lps[subSize];
    computeLPS(subString, subSize, lps);

    int i = 0;
    int j = 0;

    while(i < mainSize) {
        if(mainString[i] == subString[j]) {
            i++;
            j++;
        }
        if(j == subSize) {
            return true;
        } else if (i < mainSize && subString[j] != mainString[i]) {
            if(j != 0) {
                j = lps[j - 1];
            } else {
                i++;
            }
        }
    }
    return false;
}

int main() {
    //input_file();
    int testCase = input();
    string mainString, subString;

    cin.ignore();
    while(testCase--) {
        cin >> mainString;

        int query = input();

        cin.ignore();
        for(int i = 0; i < query; i++)  {
            cin >> subString;

            if(kmpSearch(mainString, subString)) {
                cout << "y" << endl;
            } else {
                cout << "n" << endl;
            }
        }
    }

    return 0;
}