#include <bits/stdc++.h>

#define nl "\n"

using namespace std;

int main() {
    //freopen("in.txt","rt",stdin);
    int tc,a,b;
    int slen;
    string s;

    cin>>tc;

    for(int i = 1; i <= tc; i++) {
        b = 0;
        cin>>a;
        cin>>s;
        slen = s.size();
        if (slen > 3)
            b = (int)(s[3] - '0');
        cout << "Case " << i << ": " << a * 0.5 + b * 0.05 << endl;
    }

    return 0;
}
/*
#include <bits/stdc++.h>

#define nl "\n"

using namespace std;

int main() {
    freopen("in.txt", "rt", stdin);
    int tc;
    float a, b;
    cin>>tc;
    getchar();

    string s;

    for(int i = 1; i <= tc; i++) {
        getline(cin,s);
        cout<<"Case "<<i<<": ";
        if(s.size() == 11) {
            a = s[0] - '0';
            b = s[6] - '0';
            cout<<(a*.5)+(b*.05)<<nl;
        }
        else if(s.size() == 12) {
            b = s[7] - '0';
            cout<<(10*.5)+(b*.05)<<nl;
        }
        else {
            if(s.size() == 6) {
                cout<<(10*.5)<<nl;
            }
            else {
                a = s[0] - '0';
                cout<<a*.5<<nl;
            }
        }
    }

    return 0;
}
*/
