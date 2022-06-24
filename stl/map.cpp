#include <bits/stdc++.h>
using namespace std;

int main() {
    map <string, string> mp;
    map <string, string>::iterator it;


    mp["name"] = "mahin";  // it -> {"name": "mahin"}
    mp["dept"] = "cse"; 
    mp["year"] = "1997";

    // string key, value;

    // for (int i = 0; i < 5; i++) {
    //     cin >> key >> value;

    //     mp[key] = value;
    // }

    // for (it = mp.begin(); it != mp.end(); it++) {
    //     cout << it->second << " " << it->first << endl;
    // }

    // for (auto mahin : mp) {
    //     cout << mahin.first << " " << mahin.second << endl;  
    // }

    cout << mp.begin()->first << endl;
    cout << (--mp.end())->second << endl;
    cout << (--(--mp.end()))->first << endl;

    // it = mp.begin();
    // it++;

    // it = mp.find("name1");

    // if (it != mp.end()) {
    //     cout << it->first << " " << it->second << endl;
    // }

    // map <int, int> mp1;
    // map <int, int>::iterator it1;
    // int n = 10;9

    // for (int i = 0; i < n; i++) {
    //     int a; 
    //     cin >> a;

    //     mp1[a]++;
    // }
    
    // for (it1 = mp1.begin(); it1 != mp1.end(); it1++) {
    //     if (it1->second > 1) {
    //         cout << it1->first << endl;
    //     }
    // }

    // mp.clear();    
}
