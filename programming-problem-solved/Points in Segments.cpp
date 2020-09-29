#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin>>n>>m;

    int answer[m];
    for(int i = 1; i <= m; i++) {
        answer[i] = i;
    }

    int a, b;
    for(int i = 0; i < n; i++) {
        cin>>a>>b;

        for(int j = a; j <= b; j++) {
            answer[j] = -1;
        }
    }
    int j = 0;
    int count = 0;
    vector <int> v;
    for(int i = 1; i <= m; i++) {
        if(answer[i] > 0) {
            count++;
            v.push_back(i);
        }
    }
    cout<<count<<endl;
    if(count != 0) {
        for(int i = 0; i < v.size(); i++) {
            if(i == 0) {
                cout<<v[i];
            } else {
                cout<<" "<<v[i];
            }
        }
        cout<<endl;
    }
    return 0;
}
