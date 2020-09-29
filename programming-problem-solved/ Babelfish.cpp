#include <bits/stdc++.h>
using namespace std;

int main() {
    //freopen("in.txt","rt",stdin);
    map <string, string> mp;

    string s, ss, l;
    while(getline(cin, l)) {
        if(l[0] == '\0') break;
        stringstream sss(l);
        sss>>s;
        sss>>ss;
        mp[ss] = s;
    }
    string opt;

    while(cin>>opt) {
        if(mp.find(opt)!=mp.end())
            cout<<mp[opt]<<"\n";
        else printf("eh\n");
    }

    return 0;
}
