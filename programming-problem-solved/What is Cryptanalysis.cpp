#include <bits/stdc++.h>
using namespace std;

map <char, int> mp;

void SMV() {
    typedef function<bool(pair<char, int>, pair<char, int>)> Comparator;

    Comparator comFunctor = [] (pair<char, int> elem1, pair<char, int> elem2) {
        return elem1.second > elem2.second;
    };
    multiset< pair<char, int>, Comparator> ms(mp.begin(), mp.end(), comFunctor);

    for(auto it : ms) cout<<it.first<<" "<<it.second<<endl;
}

int main() {
    //freopen("in.txt", "rt", stdin);
    int n;
    cin>>n;

    cin.ignore();
    char c;

    while(scanf("%c",&c) != EOF) {
        if(isalpha(c)) {
            mp[toupper(c)]++;
        }
    }
    SMV();

    return 0;
}
