#include <bits/stdc++.h>
#include <cstdio>

#define nl "\n"

using namespace std;

int main() {
    int tc;
    cin>>tc;

    int n, a = 0;
    char ch[35];

    char name[tc][35];
    int point[tc];

    for(int i = 0; i < tc; i++) {
        cin>>ch>>n;
        a++;
        if(i == 0) {
            strcpy(name[i],ch);
            point[i] = n;
            cout<<a<<nl;
        }
        else {
            for(int j = 0; j < a; j++) {
                if(name[i] == name[j]) {
                    point[i] += n;
                    cout<<point[i]<<nl;
                }
                else {
                    strcpy(name[i],ch);
                    point[i] = n;
                    break;
                }
            }
        }

    }
    sort(point,point+tc);
        for(int i = 0; i < tc; i++) {
            cout<<name[i]<<" "<<point[i]<<nl;
        }

    return 0;
}
