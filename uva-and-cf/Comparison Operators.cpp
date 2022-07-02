#include <bits/stdc++.h>
#include<vector>
#include<algorithm>

using namespace std;

int main() {
    vector<pair<int, int>> v;

    v.push_back({1,5});
    v.push_back({2,3});
    v.push_back({1,2});

    sort(v.begin(), v.end());

    ///after sorted ---> (1,2), (1,5), (2,3);

    vector<tuple<int, int, int>> ve;

    ve.push_back({1,2,3});
    ve.push_back({1,3,3});
    ve.push_back({1,2,5});

    ///after sorted ---> (1,2,3), (1,2,5), (1,3,3);
}
