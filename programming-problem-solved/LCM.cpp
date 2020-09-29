#include <bits/stdc++.h>
using namespace std;

long long divisor(long long n)
{
    long long i, m, c=0;
    m=sqrt(n+1);
    for(i=1; i<=m; i++)
    {
        if(i*i==n) c++;
        else if(n%i==0) c=c+2;
    }
    return c;
}

int main()
{
    long long n;
    cin >> n;
    cout << divisor(n) << endl;
    return 0;
}

