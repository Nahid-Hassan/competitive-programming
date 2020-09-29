#include <bits/stdc++.h>

using namespace std;

int main() {
    int nb,t;
    cin>>nb>>t;
    int a[nb];

    for(int i = 0; i < nb; i++) {
        cin>>a[i];
    }
    sort(a,a+nb);
    int sum = 0;
    int count = 0;
    int i = 0;
    while(1) {
        sum += a[i];
        i++;
        if(sum <= t) {
            count++;
        }
        else {
            break;
        }
    }
    cout<<count<<endl;


    return 0;
}
