#include <bits/stdc++.h>
using namespace std;

int main() {
    map <string, int> mp;
    map <string, int>::iterator it, it1, it2;

    map <string, int> mp1;
    

    // mp["one"] = 1;
    // mp["two"] = 2;
    // mp["three"] = 3;
    // mp["four"] = 4;

    mp.insert(pair<string, int>("one", 1));
    mp.insert(pair<string, int>("two", 2));

    cout << mp["three"] << endl;

    mp1 = mp;

    for(it = mp.begin(); it != mp.end(); it++) {
        it->second = it->second * 2;
        cout << it->first << " " << it->second << endl;
    }

    cout << mp.max_size() <<endl;
    cout << mp.size() << endl;;;;;

    mp.erase(mp.begin());

    cout << mp1.size() << endl;;;;;
    cout << mp.size() << endl;;;;;

    it1 = mp.lower_bound("one");
    it2 = mp.upper_bound("two");
    // mp.erase(it1);
    // mp.erase("two")
    // mp.erase(it1, it2);

    // for (auto it : mp) {
    //     cout << it.first << " " << it.second << endl;
    // }

   
    // auto p = "nahid";
    // cout << p << endl;
}
