#include <bits/stdc++.h>

#define nl "\n"

using namespace std;

int main() {
    int tc;

    cin>>tc;

    while(tc--) {
        int n, j;
        int a[10];

        for(int i = 0; i < 10; i++) {
            a[i] = 0;
        }
        cin>>n;

        for(int i = 1; i <= n; i++) {
            j = i;
            while(j != 0) {
                int k = j % 10;
                a[k]++;
                j = j / 10;
            }
        }
        for(int i = 0; i < 9; i++) {
            cout<<a[i]<<" ";
        }
        cout<<a[9]<<nl;
    }

    return 0;
}
/*
#include<cstdio>
#include<cstring>
#include<string>
#include<cmath>
#include<cctype>
#include<map>
#include<stack>
#include<cstdlib>
#include <queue>
#include <vector>
#include<algorithm>
#include<iostream>
#define ll long long
#define sc scanf
#define pf printf
#define Pi 2*acos(0.0)
using namespace std;
int main()
{
    int t;
    sc("%d",&t);
    while(t--)
    {
        map<char,int>mp;
        int n;
        sc("%d",&n);
        for(int i=1;i<=n;i++)
        {
            int tp=i;
            while(tp>0)
            {
            mp[tp%10+'0']++;
            tp=tp/10;
            }
        }
        pf("%d %d %d %d %d %d %d %d %d %d\n",mp['0'],mp['1'],mp['2'],
           mp['3'],mp['4'],mp['5'],mp['6'],mp['7'],mp['8'],mp['9']);
    }


    return 0;
}
*/
/*
int Number = 123;       // number to be converted to a string

string Result;          // string which will contain the result

ostringstream convert;   // stream used for the conversion

convert << Number;      // insert the textual representation of 'Number' in the characters in the stream

Result = convert.str(); // set 'Result' to the contents of the stream

*/
