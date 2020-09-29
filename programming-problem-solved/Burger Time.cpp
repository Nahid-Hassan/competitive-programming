#include <bits/stdc++.h>

#define nl "\n"

using namespace std;

int main() {
    int n, count;
    string s;
    bool t;
    freopen("in.txt","rt",stdin);

    while(cin>>n && n) {
        cin.ignore();
        count = 0;
        int m = 0;
        int answer  =  2000010;
        t = true;
        cin>>s;

        for(int i = 0; i < s.size(); i++) {
            if(s[i] == 'Z') {
                cout<<0<<nl;
                t = false;
                break;
            }
            else if(s[i] == 'R') {
                for(int j = i+1; j < s.size(); j++) {
                    if(s[j] == 'D') {
                        count++;
                        answer = min(answer, count);
                        count = 0;
                        break;
                    }
                    else if(s[j] == 'R') {
                        count = 0;
                        i = j;
                        break;
                    }
                    else {
                        count++;
                    }
                }
            }
            else if(s[i] == 'D') {
                for(int j = i+1; j < s.size(); j++) {
                    if(s[j] == 'R') {
                        count++;
                        answer = min(answer, count);
                        count = 0;
                        break;
                    }
                    else if(s[j] == 'D') {
                        count = 0;
                        i = j;
                        break;
                    }
                    else {
                        count++;
                    }
                }
            }
            else {
                m++;
            }
        }

        if(t) {
            cout<<min(answer,m)<<nl;
        }
    }

    return 0;
}

/*
#include <bits/stdc++.h>

#define nl "\n"

using namespace std;

int main() {
    //freopen("in.txt","rt",stdin);

    int n;

    while(cin>>n && n) {
        cin.ignore();

        string s;

        cin>>s;

        int answer = n;
        int r = -n;
        int d = -n;

        for(int i = 0; i < s.size(); i++) {
            if(s[i] == 'Z') {
                answer = 0;
                break;
            }
            if(s[i] == 'R') {
                r = i;
                answer = min(answer, i - d);
            }
            if(s[i] == 'D') {
                d = i;
                answer = min(answer, i - r);
            }
        }
        cout<<answer<<nl;
    }

    return 0;
}
*/
