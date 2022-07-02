#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin>>n>>m;

    int a[m+4];
    for(int i = 0; i < m; i++) cin>>a[i];

    sort(a, a+m);

    vector <int> v;
    int count = 0;
    for(int i = 0; i < m; i++) {
        if(a[i] == a[i+1]) count++;
        else {
            count++;
            v.push_back(count);
            count = 0;
        }
    }
    sort(v.rbegin(), v.rend());


    return 0;
}
