#include<bits/stdc++.h>
#include<algorithm>

using namespace std;

int main(int argc, char const *argv[])
{
    string s;
    while(cin>>s) {
        if(s[0]=='#') break;
        else {
            if(prev_permutation(s.begin(),s.end())) {
                cout<<s<<endl;
            } else {
                cout<<"No Successor"<<"\n";
            }
        }
    }


    return 0;
}
