#include <bits/stdc++.h>
using namespace std;

int main() {
    int testCase, dataBase;

    cin>>testCase;

    for(int m = 0; m < testCase; m++) {
        cin>>dataBase;
        if(m>0) cout<<endl;

        int low[dataBase], up[dataBase];
        char company[dataBase][25];

        for(int i = 0; i < dataBase; i++) {
            cin>>company[i]>>low[i]>>up[i];
        }

        int query, count = 0, ans;
        cin>>query;
        int p;
        for(int i = 0; i < query; i++) {
            cin>>p;

            for(int j = 0; j < dataBase; j++) {
                if(low[j] <= p && up[j] >= p) {
                    count++;
                    ans = j;
                    if(count > 1) break;
                }
            }
            if(count == 1) {
                cout<<company[ans]<<endl;
                 count = 0;
            } else {
                cout<<"UNDETERMINED"<<endl;
                count = 0;
            }
        }

    }

    return 0;
}
