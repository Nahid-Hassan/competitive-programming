#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<vector<int>> people;
    
    auto cmp = [](vector<int>&a, vector<int>&b) {
        return a[0]==b[0]?a[1]>b[1]:a[0]<b[0];
    };
    sort(people.begin(), people.end(), cmp);
}