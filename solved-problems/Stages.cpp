#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin>>n>>m;

    string s,ss;
    cin>>s;
    sort(s.begin(),s.end());

    int sum = 0;
    int count = 0;
    for(int i = 0; i < s.size(); i++) {
        if(i == 0) {
            sum +=s[i] - 96;
            ss[0] = s[i];
            count++;
            if(count == m) break;
        } else if(ss[0] + 1 < s[i]) {
            sum +=s[i] - 96;
            ss[0] = s[i];
            count++;
            if(count == m) break;
        }

    }
    if(sum !=0 && count == m) cout<<sum<<endl;
    else cout<<-1<<endl;

    return 0;
}
