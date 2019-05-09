//Author: nahid.cseru@gmail.com
#include <bits/stdc++.h>
using namespace std;

#define input_file() freopen("in.txt", "rt", stdin);
int input() {int n; cin >> n; return n;}

int main() { 
    //input_file();
    int testCase = input();
    string s;

    cin.ignore();
    while(testCase--) {
        getline(cin, s);

        int l = s.size();
        int sqrtl = sqrt(l);
        
        if(sqrtl * sqrtl == l) {
            for(int i = 0; i < sqrtl; i++) {
                for(int j = i; j < l; j = j + sqrtl) {
                    cout << s[j];
                }
            }    
        } else {
            cout << "INVALID";
        }
        cout << endl;
    }

    return 0;
}
