#include <bits/stdc++.h>

#define nl "\n"

using namespace std;

int main() {
    int n;
    cin>>n;
    int a[n];

    for(int i = 0; i < n; i++) {
        cin>>a[i];
    }
    int needPay = 0;
    int aa = 0;
    sort(a,a+n);
    for(int i = 0; i < n; i++) {
        needPay += abs(aa - a[i]);
        aa = a[i];

    }
    cout<<aa<<nl;
//    int temp = a[n - 1];
//    n--;
//    sort(a,a+n);
//    n++;
//    int aa = 0, needPay = 0;
//    for(int i = 0; i < n - 1; i++) {
//        needPay +=abs(aa-a[i]);
//        aa = a[i];
//    }
//    int j = abs(a[n-1] - needPay);
//    cout<<j<<nl;


    return 0;
}
/*
#include <bits/stdc++.h>

#define nl "\n"

using namespace std;

int main() {
    int  x = 0, a, n, ans = 0,e = 0;
    cin >> n;
    for(int i = 1; i <= n; i++)
    {
        cin >> a;

        e += x-a;

        if(e < 0){
            ans += abs(e);
            e = 0;
        }
        x = a;
    }
    cout<<ans<<nl;

    return 0;
}

*/
