#include <bits/stdc++.h>
using namespace std;

int main() {
    int tc, casen = 0;
    //freopen("in.txt","rt",stdin);

    while(cin>>tc) {
        string s;
        getline(cin,s);
        getline(cin,s);

        while(tc--) {
            map <string, int> mp;
            int n = 0;

            while(getline(cin, s)) {
                if(s.compare("") == 0) break;
                mp[s]++; n++;
            }
            for(map <string, int>::iterator it = mp.begin(); it != mp.end(); it++) {
                cout<<it->first<<" "<<fixed<<setprecision(4)<<it->second*100.0/n<<endl;
            }
            if(tc) {
                cout<<endl;
            }
        }
    }

    return 0;
}
