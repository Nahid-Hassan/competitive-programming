#include <bits/stdc++.h>
using namespace std;

#define input_file() freopen("in.txt", "rt", stdin);

int main() {
    int tc;
    //input_file();

    cin>>tc;

    for(int i = 1; i <= tc; i++) {
        int n;
        string s;

        cin>>n>>s;

        int count = 0;
        for(int j = 0; j < n; ) {
            if(s[j] == '#') {
                j++;
            } else {
                count++;
                j += 3;
            }
        }
        cout<<"Case "<<i<<": "<<count<<endl;
    }

    return 0;
}
