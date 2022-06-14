#include <bits/stdc++.h>

#define nl "\n"

using namespace std;

int main() {
    /*n stands for number of boys and m stands for number of girls*/
    int n, m;

    /*boys dancing skill*/
    cin>>n;
    int a[n];
    for(int i  = 0 ; i < n; i++) cin>>a[i];

    /*girls dancing skill*/
    cin>>m;
    int b[m];
    for(int i = 0; i < m; i++) cin>>b[i];

    /*sorted them*/
    sort(a, a + n);
    sort(b, b + m);

    int result = 0;

    /*finally count make how many pairs*/
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            if(abs(a[i] - b[j]) <= 1) {
                result++;
                b[j] = 150;
                break;
            }
        }
    }
    cout<<result<<nl;

    return 0;
}
