#include <bits/stdc++.h>
using namespace std;

int dl(string s, int len) {
    string ss = "abcdefghijklmnopqrstuvwxyz";
    int count = 0;
    for(int i = 0; i < len; i++) {
        for(int j = 0; j < ss.size(); j++) {
            if(s[i] == ss[j] && ss[j] != '\0') {
                ss[j] = '\0';
                count++;
                j = 30;
            }
        }
    }
    return count;
}

int main() {
    int len;
    string s, ss;

    cin>>len>>s>>ss;

    int slen = dl(s,len);
    int sslen = dl(ss, len);

    int count = 0;
    vector <int> v;
    if(s.compare(ss) == 0) {
        cout<<0<<endl;
        return 0;
    }
    else if(slen != sslen) {
        cout<<-1<<endl;
        return 0;
    } else if(slen == sslen) {
       l1: for(int i = 0; i < len; i++) {
            if(s[i] != ss[i]) {
                swap(s[i],s[i+1]);
                count++;
                if(count > 10000) {
                    cout<<-1<<endl;
                    return 0;
                }
                v.push_back(i+1);
            }
        }
        if(s.compare(ss) != 0) {
            goto l1;
        }
    }
    if(true) {
        cout<<count<<endl;
        for(int i = 0; i < v.size(); i++) {
            if(i == 0) {
                cout<<v[i];
            } else {
                cout<<" "<<v[i];
            }
        }
        cout<<endl;
    }

    return 0;
}
