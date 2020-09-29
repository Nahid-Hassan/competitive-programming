#include <bits/stdc++.h>
using namespace std;

int main() {
    int testCase, n, casen = 0;
    string s, ss;

    scanf("%d", &testCase);

    while(testCase--) {
        casen++;
        scanf("%d",&n);
        while(getchar() != '\n');

        map <string, string> mp;
        while(n--) {
            getline(cin, s);
            getline(cin, ss);
            mp[s] = ss;
        }

        scanf("%d",&n);
        while(getchar() != '\n');

        map <string, int> mpv;
        while(n--) {
            getline(cin, s);
            auto it = mp.find(s);
            if(it != mp.end()) {
                mpv[s]++;
            }
        }

        int count = 0;
        int mx = -1;
        string winCandid;

        for(auto it = mpv.begin(); it != mpv.end(); it++) {
            if(it->second > mx) mx = it->second;
        }
        for(auto it = mpv.begin(); it != mpv.end(); it++) {
            if(it->second == mx) {
                winCandid = it->first;
                count++;
            }
        }

        if(casen > 1) cout<<endl;
        if(count == 1) {
            for(auto it = mp.begin(); it != mp.end(); it++) {
                if(winCandid == it->first) {
                    cout<<it->second<<endl;
                }
            }
        } else {
            cout<<"tie"<<endl;
        }

    }

    return 0;
}
