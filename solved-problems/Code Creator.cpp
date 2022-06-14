#include <bits/stdc++.h>
#include <string>
#define nl "\n"

using namespace std;

int main() {
    int tc,i = 0;
    //freopen("txt.out","wt",stdout);

    while(cin>>tc && tc) {
        cout<<"Case "<<++i<<":"<<nl;
        cout<<"#include<string.h>"<<nl;
        cout<<"#include<stdio.h>"<<nl;
        cout<<"int main()"<<nl;
        cout<<"{"<<nl;
        getchar();
        for(int j = 0; j < tc; j++) {
            string s;

            getline(cin, s);

            if(s[0] == '\"') {
                cout<<"printf("<<"\""<<"\\"<<s<<"\b"<<"\\"<<"\""<<"\\n"<<"\""<<");"<<nl;
            }
            else {
                cout<<"printf("<<"\""<<s<<"\\n"<<"\""<<");"<<nl;
            }
        }
        cout<<"printf("<<"\\n"<<");"<<nl;
        cout<<"return 0;"<<nl;
        cout<<"}"<<nl;
    }
}
