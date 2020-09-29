#include <bits/stdc++.h>
using namespace std;

map <char, int> mp;

void SMV() {
    typedef function<bool(pair<char, int>, pair<char, int>)> Comparator;

    Comparator comFunctor = [] (pair<char, int> elem1, pair<char, int> elem2) {
        return elem1.second < elem2.second || (elem1.second == elem2.second && elem1.first > elem2.first);
    };

    multiset< pair<char, int>, Comparator> ms(mp.begin(), mp.end(), comFunctor);

    for(auto it : ms) printf("%d %d\n",it.first, it.second);
}

int main() {
    string s;
    int casen = 0;
    while(getline(cin, s)) {
        casen++;
        mp.clear();
        for(int i = 0; i < s.size(); i++) mp[s[i]]++;
        if(casen > 1) cout<<endl;
        SMV();
    }

    return 0;
}
