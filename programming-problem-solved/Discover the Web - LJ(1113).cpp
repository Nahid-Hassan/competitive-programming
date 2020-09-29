#include <bits/stdc++.h>

#define nl "\n"

using namespace std;

int main() {
    int tc;
    int check = 0,count = 0;

    cin>>tc;
    char command[10];
    string vSName;

//    vector <string> vs;
//    vector <string>::iterator it;
//    it = vs.begin();
//
//    vs.push_back("http://www.lightoj.com/");
//    check++;
//    count++;

    for(int i = 1; i <= tc; i++) {
        cout<<"Case "<<i<<":"<<nl;
        vector <string> vs;
        vector <string>::iterator it;
        vs.push_back("http://www.lightoj.com/");
        it = vs.begin();
        check++;
        count++;

        while(cin>>command) {
            it = vs.begin();
            cout<<command<<nl;
            if(strcmp(command, "QUIT") == 0) {
                break;
            }
            if(strcmp(command, "VISIT") == 0) {
                vs.push_back(vSName);
                //it = vs.begin();
                it++;
                check++;
                count++;
                cout<<*it<<nl;
            }
            else if(strcmp(command, "BACK") == 0) {
                it--;
                check--;

                if(check<0) {
                    cout<<"Ignored"<<nl;
                }
                else {
                    cout<<*it<<nl;
                }
            }
            else if(strcmp(command, "FORWARD") == 0) {
                it++;
                check++;

                if(check > count) {
                    cout<<"Ignored"<<nl;
                }
                else {
                    cout<<"*it"<<nl;
                }
            }

        }
    }

    return 0;
}
