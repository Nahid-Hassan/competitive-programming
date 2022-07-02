#include <bits/stdc++.h>
#define p cout
#define s cin
#define l long long
#define i int
#define m min
#define r return
#define e endl
using namespace std;

int main()
{
    i a, b, c;

    s>>a>>b>>c;

    i d = m(a, m(b/2, c/4));

    p<<(d+(d*2)+(d*4))<<e;

    r 0;
}
