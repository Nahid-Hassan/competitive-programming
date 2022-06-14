#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<string> vs;

    string s;
    while(cin>>s && s!= "#") {
        vs.push_back(s);
    }
    string ss;
    cin.ignore();
    while(getline(cin, ss)) {
        istringstream is(ss);

        if(ss == "#") break;
        string s1, s2;
        vector <string> vss;
        while(is>>s2) {
            s1 += s2;
        }
        int ans = 0;
        string str1, str2;
        for(int i = 0; i < vs.size(); i++) {
            str1 = s1;
            str2 = vs[i];
            int count = 0;
            for(int m = 0; m < str2.size(); m++) {
                for(int k = 0; k < str1.size(); k++) {
                    if(str2[m] == str1[k]) {
                        count++;
                        str1[k] = '0';
                        break;
                    }
                }
            }
            if(count == vs[i].size()) {
                ans++;
            }
        }
        cout<<ans<<endl;
    }

    return 0;
}
