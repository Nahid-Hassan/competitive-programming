#include <bits/stdc++.h>
using namespace std;

int main() {
    freopen("in.txt", "rt", stdin);
    string s;
    int mx;

    map <char, int> mp;
    while(getline(cin, s)) {
        cout<<s<<endl;
        mp.clear();

        for(int i = 0; i < s.size(); i++) {
            if(isalpha(s[i])) {
                mp[s[i]]++;
            }
        }
        mx = -1;
        for(auto it = mp.begin(); it != mp.end(); it++)  {
            if(it->second > mx) {
                mx = it->second;
            }
        }
        for(auto it = mp.begin(); it != mp.end(); it++)  {
            if(it->second == mx) {
                cout<<it->first;
            }
        }
        cout<<" "<<mx<<endl;
    }

    return 0;
}
