//Author: nahid.cseru@gmail.com
#include <bits/stdc++.h>
using namespace std;

#define input_file() freopen("in.txt", "rt", stdin);
int input() {int n; cin >> n; return n;}

int main() {
    int testCase = input();
    string s, s1;
    int casen = 0;

    cin.ignore();
    getline(cin, s);

    while(testCase--) {
        cout << "Case #" << ++casen << ":" << endl;

        while(getline(cin, s)) {
            if(s == "\n" || s.size() == 0) break;
            istringstream is(s);

            int idx = 0;
            while(is >> s1) {
                if(s1.size() >= idx + 1) {
                    cout << s1[idx];
                    idx++;
                } else {
                    continue;
                }
            }
            cout << endl;
        }
        if (testCase > 0) {
            cout << endl;
        }
    }

    return 0;
}