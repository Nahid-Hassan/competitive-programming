#include <bits/stdc++.h>
using namespace std;

#define input_file() freopen("in.txt", "rt", stdin);
int input() {int n; cin >> n; return n;}

int main() {
    //input_file();
    int testCase = input();
    string decode = "OIZEASGTBP";
    string s;
    cin.ignore();
    while(testCase--) {
        while(getline(cin, s)) {
            if(s == "\n") continue;
            for(int i = 0; i < s.size(); i++) {
                if(isdigit(s[i])) {
                    int n = s[i] - '0';
                    cout << decode[n];
                } else {
                    cout << s[i];
                }
            }
            cout << endl;
        }
        if(testCase > 1) cout << endl;
        getchar();
    }
    return 0;
}