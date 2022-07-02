#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;

    map <string, int> mp;

    string s, ss;
    while(cin>>s && getline(cin, ss)) {
        mp[s]++;
    }
    for(auto it : mp) cout<<it.first<<" "<<it.second<<endl;

    return 0;
}
