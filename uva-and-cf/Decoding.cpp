#include <bits/stdc++.h>
using namespace std;

int main() {
    int tc, n;
    string s, ss;
    char ch;

    cin>>tc;
    for(int i = 1; i <= tc; i++) {
        cout<<"Case "<<i<<": ";

        cin>>s;
        for(int j = 0; j < s.size(); j++) {
            if(s[j] >= 'A' && s[j] <= 'Z') {
                ch = s[j];
                ss.clear();
            } else if(s[j] >= '0' && s[j] <= '9') {
                while(s[j] >= '0' && s[j] <='9') {
                    ss += s[j];
                    j++;
                }
                j--;
                n = stoi(ss);
                for(int k = 0; k < n; k++) {
                    printf("%c",ch);
                }
            }
        }
        printf("\n");
    }

    return 0;
}
