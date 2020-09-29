#include <bits/stdc++.h>
using namespace std;

string intToString(int x) {
    stringstream ss;
    ss << x;
    string str;
    ss >> str;
    reverse(str.begin(), str.end());
    ss.clear();
    ss << str;
    return str;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    string s;
    while(getline(cin, s)) {
        cout<<s<<endl;
        for(int i = 0; i < s.size(); i++) {
            int a = s[i];
            if(s[i] >= 65 && s[i] <= 122) {
                int a = s[i];
                string ss = intToString(a);
                cout<<ss;
            }
        }
    }
}
