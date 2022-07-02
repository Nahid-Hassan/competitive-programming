#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    string s;

    while(cin>>n>>s) {
        map <string, int> mp;
        map <string, int>::iterator it;

        for(int i = 0; i < s.size() - n + 1; i++){
            mp[s.substr(i, n)]++;
        }

        int mx = 0;
        string ans;
        for(it = mp.begin(); it != mp.end(); it++) {
            if(it->second > mx) {
                mx = it->second;
                ans = it->first;
            }
        }
        cout<<ans<<endl;
    }

    return 0;
}
