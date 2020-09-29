#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define mx 999999999

int main() {
    ll participent, budget, hotel, week, cost = mx, room, amount, temp;

    while(cin>>participent>>budget>>hotel>>week) {
        for(int i = 0; i < hotel; i++) {
            cin>>amount;

            for(int j = 0; j < week; j++) {
                cin>>room;
                temp = 0;
                if(room >= participent) {
                    temp = amount * participent;
                    if(temp < cost) {
                        cost = temp;
                    }
                }
            }
        }
        if(cost > budget) {
            cout<<"stay home\n";
        } else {
            cout<<cost<<endl;
        }
        cost = mx;
    }

    return 0;
}
