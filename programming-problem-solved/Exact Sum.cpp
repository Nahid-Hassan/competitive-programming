#include <bits/stdc++.h>

#define nl "\n"
#define inf 1<<30

using namespace std;

int main()
{
    int n, p, r1 = 0,r2 = 0,dis = inf, ans = inf, b1 = 0,b2 = 0;
    while(scanf("%d",&n) == 1)
    {
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        cin>>p;
        sort(a,a+n);
        r1 = 0,r2 = 0,dis = inf, ans = inf, b1 = 0,b2 = 0;
        for(int i=n-1;i>=0;i--)
        {
           if(a[i]<p)
           {
               if(binary_search(a,a+n,p-a[i]))
               {
                   r1=p-a[i];
                   r2=a[i];
                   dis=abs(r2-r1);
               }
           }
           if(ans>dis)
           {
               b1=r1;
               b2=r2;
               ans=dis;
           }
        }
        cout<<"Peter should buy books whose prices are "<<b1<<" and "<<b2<<"."<<endl;
        cout<<nl;
    }

    return 0;
}
/*
#include <bits/stdc++.h>

#define nl "\n"
#define ll long long
#define inf 1<<30

using namespace std;

int main() {
    int n;

    while(scanf("%d",&n) == 1) {
        int a[n];
        for(int i = 0; i < n; i++) {
            cin>>a[i];
        }
        sort(a, a+n);


        int p, bookIndex1 = 0, bookIndex2 = 0, ans = inf, diff, b = 0, b1 = 0;
        cin>>p;

        for(int i = n - 1; i >= 0; i--) {
            if(a[i] < p) {
                if(binary_search(a,a+n,p-a[i])) {
                    bookIndex1 = p - a[i];
                    bookIndex2 = a[i];
                    diff = abs(bookIndex1 - bookIndex2);
                }
            }
            if(ans>diff)
            {
               b = bookIndex1;
               b1 = bookIndex2;
               ans = diff;
           }
        }
        cout<<"Peter should buy books whose prices are "<<b<<" and "<<b1<<"."<<endl;
        cout<<nl;
    }

    return 0;
}
*/
/*
#include <bits/stdc++.h>

#define nl "\n"
#define ll long long

using namespace std;

int main() {
    ll n,in_i, in_j, mn = 1000000000;

    while(scanf("%lld",&n)==1) {
        ll a[n], p;

        for(ll i = 0; i < n ; i++) {
            cin>>a[i];
        }
        cin>>p;
        for(ll i = 0; i < n; i++) {
            for(ll j = i + 1; j < n; j++) {
                if(p == a[i] + a[j]) {
                    ll temp = abs(a[j] - a[i]);
                    ll jtemp = min(temp,mn);
                    if(jtemp <= mn) {
                        mn = jtemp;
                        in_i = i;
                        in_j = j;
                    }
                }
            }
        }
        if(a[in_j] <= a[in_i]) {
            cout<<"Peter should buy books whose prices are "<<a[in_j]<<" and "<<a[in_i]<<"."<<nl<<nl;
        }
        else {
            cout<<"Peter should buy books whose prices are "<<a[in_i]<<" and "<<a[in_j]<<"."<<nl<<nl;
        }
    }

    return 0;
}
*/
/*
    /******************************************************************
***   Problem       : 11057 - Exact Sum                         ***
***   Author        : Shipu Ahamed (Psycho Timekiller)          ***
***   E-mail        : shipuahamed01@gmail.com                   ***
***   University    : BUBT,Dept. of CSE                         ***
***   Team          : BUBT_Psycho                               ***
***   My Blog       : http://shipuahamed.blogspot.com           ***
***   Facebook      : http://www.facebook.com/DeesheharaShipu   ***
******************************************************************/
/*
#include <list>
#include <set>
#include <map>
#include <ctime>
#include <stack>
#include <queue>
#include <cmath>
#include <deque>
#include <limits>
#include <string>
#include <cctype>
#include <cstdio>
#include <vector>
#include <bitset>
#include <numeric>
#include <cassert>
#include <sstream>
#include <fstream>
#include <cstdlib>
#include <cstring>
#include <utility>
#include <complex>
#include <iomanip>
#include <iostream>
#include <iterator>
#include <algorithm>
using namespace std;

#define sc scanf
#define pf printf
#define ll long long
#define pi 2*acos(0.0)
#define ull unsigned long long
#define all(v) v.begin(),v.end()

#define sii(t) scanf("%d",&t)
#define sll(t) scanf("%lld",&t)
#define ssii(a,b) scanf("%d%d",&a,&b)
#define ssll(a,b) scanf("%lld%lld",&a,&b)
#define Case(no) printf("Case %d: ",++no)
#define nl puts("")
#define P(a) printf("%dn",a)
#define PL(a) printf("%lldn",a)
#define PN(a) printf("%d ",a)
#define PLN(a) printf("%lld ",a)
#define CP(a) cout<<a<<endl;
#define CPN(a) cout<<a<<" ";


#define ff first
#define se second
#define pb push_back
#define ST(v) sort(all(v))
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*(b/gcd(a,b)))
#define max3(a,b,c) max(a,max(b,c))
#define min3(a,b,c) min(a,min(b,c))
#define maxall(v) *max_element(all(v))
#define minall(v) *min_element(all(v))
#define cover(a,d) memset(a,d,sizeof(a))
#define popcount(i) __builtin_popcount(i)                         //count one
#define parity(i) __builtin_parity(i)       //evenparity 0 and odd parity 1
#define input freopen("in.txt","r",stdin)
#define output freopen("out.txt","w",stdout)
#define un(v) ST(v), (v).earse(unique(all(v)),v.end())
#define common(a,b) ST(a), ST(b), a.erase(set_intersection(all(a),all(b),a.begin()),a.end())
#define uncommon(a,b) ST(a), ST(b), a.erase(set_symmetric_difference(all(a),all(b),a.begin()),a.end())

////============ CONSTANT ===============////
#define mx  (1000010)
#define inf 1<<30                                           //infinity value
#define eps 1e-9
#define mod 10007
////=====================================////
int main()
{
    int n;
    while(sii(n)==1)
    {
        int a[10010];
        for(int i=0;i<n;i++)
        {
            sii(a[i]);
        }
        int m;
        sii(m);
        sort(a,a+n);
        int res1=0,res2=0,dis=inf,ans=inf,book1=0,book2=0;
        for(int i=n-1;i>=0;i--)
        {
           if(a[i]<m)
           {
               if(binary_search(a,a+n,m-a[i]))
               {
                   res1=m-a[i];
                   res2=a[i];
                   dis=abs(res2-res1);
               }
           }
           //PN(res1),PN(res2),PN(dis), P(ans);
           if(ans>dis)
           {
               book1=res1;
               book2=res2;
               ans=dis;
           }
        }
        cout<<"Peter should buy books whose prices are "<<book1<<" and "<<book2<<"."<<endl;
        nl;
    }
    return 0;
}
*/
