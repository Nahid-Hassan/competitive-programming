#include <bits/stdc++.h>

using namespace std;

int main()
{
    int b[0];
    vector<int> v;
    for(int i = 0; i < 10; i++) {
        cin>>b[0];
        int a = b[0];
        v.push_back(a);
    }
    cout<<endl;
    sort(v.begin(),v.end());
    for(int i = 0; i < 10; i++) {
        cout<<v[i]<<"  ";
    }
    cout<<endl;
    sort(v.rbegin(),v.rend());
    for(int i = 0; i < 10; i++) {
        cout<<v[i]<<"  ";
    }

    string s;
    s  = "monkey";
    cout<<s<<endl;
    sort(s.begin(),s.end());
    cout<<s<<endl;
}
