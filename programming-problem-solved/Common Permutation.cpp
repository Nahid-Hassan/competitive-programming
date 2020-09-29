#include <bits/stdc++.h>
using namespace std;

void common_permutation(string s1, string s2) {
    string ans;
    for(int i = 0; i < s1.size(); i++) {
        for(int j = 0; j < s2.size(); j++) {
            if(isalpha(s1[i]) && isalpha(s2[j])) {
                if(s1[i] == s2[j]) {
                    ans +=s1[i];
                    s1[i] = '1';
                    s2[j] = '1';
                    break;
                }
            }
        }
    }
    cout<<ans<<endl;
}

int main() {
    string s1, s2;

    while(getline(cin, s1) && getline(cin, s2)) {

        if(s1.size() == 0 && s2.size() == 0) {
            cout<<endl;
        } else {
            sort(s1.begin(), s1.end());
            sort(s2.begin(), s2.end());

            if(s1.size() >= s2.size()) {
                common_permutation(s1, s2);
            } else {
                common_permutation(s2, s1);
            }
        }
    }

    return 0;
}
