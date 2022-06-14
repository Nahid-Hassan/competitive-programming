#include <bits/stdc++.h>
using namespace std;

bool compare(const pair<int, int>&a, const pair<int, int>&b)
{
   return a.second < b.second;
}

int main() {
    int testCase;
    cin>>testCase;

    cin.ignore();
    while(testCase--) {
        string s;
        getline(cin, s);

        map <char, int> mp;
        for(int i = 0; i < s.size(); i++) {
            if(isalpha(s[i])) mp[tolower(s[i])]++;
        }
        int mx = max_element(mp.begin(), mp.end(), compare) -> second;

        for(auto it : mp) {
            if(it -> second == mx) {
                cout<<it->first;
            }
        }
        cout<<endl;
    }

    return 0;
}
/*
#include <bits/stdc++.h>
using namespace std;

int main() {
    int testCase;
    cin>>testCase;

    cin.ignore();
    while(testCase--) {
        string s;
        getline(cin, s);

        map <char, int> mp;
        for(int i = 0; i < s.size(); i++) {
            if(isalpha(s[i])) mp[tolower(s[i])]++;
        }
        int mx = -1;
        for(auto it = mp.begin(); it != mp.end(); it++) {
            if(it -> second > mx) {
                mx = it->second;
            }
        }
        for(auto it = mp.begin(); it != mp.end(); it++) {
            if(it -> second == mx) {
                cout<<it->first;
            }
        }
        cout<<endl;
    }

    return 0;
}
*/
