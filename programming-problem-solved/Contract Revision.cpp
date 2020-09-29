#include <bits/stdc++.h>
using namespace std;

void CR(int n, char ch[]) {
    bool flag = false;

    for(int i = 0; ch[i]; i++) {
        if(ch[i] - '0' != n) {
            if(ch[i] == '0') {
                if(flag) {
                    cout<<ch[i];
                }
            } else {
                cout<<ch[i];
                flag = true;
            }
        }
    }
    if(!flag) {
        cout<<"0";
    } cout<<endl;
}

int main() {
     char ch[150];
     int n;
     while(cin>>n>>ch && n) {
        CR(n, ch);
     }

     return 0;
}

/*#include <bits/stdc++.h>
using namespace std;

void ContractRevision(char ch, string s) {
    bool flag = false;

    for(int i = 0; s[i]; i++) {
        if(s[i] != ch) {
            if(s[i] == '0') {
                if(flag) {
                    cout<<s[i];
                }
            } else {
                cout<<s[i];
                flag = true;
            }
        }
    }
    if(!flag) {
    cout<<"0";
    } cout<<endl;
}

int main(){
    char ch;
    string s;

    while(cin>>ch>>s) {
        ContractRevision(ch, s);
    }

    return 0;
}
*/
