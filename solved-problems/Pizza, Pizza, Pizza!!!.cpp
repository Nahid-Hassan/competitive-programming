#include<cstdio>
#include<iostream>

using namespace std;

int main()
{
    long long n;
    scanf("%I64d",&n);

    if(n == 0) printf("0\n");
    else if((n+1)%2==0) printf("%I64d\n",(n+1)/2);
    else printf("%I64d\n",(n+1));

    return 0;
}
/*
    tutorial:

    If n = 0, the answer is obviously 0.

    If n + 1 is even, we can make  diametric cuts. Otherwise, the only way is to make n + 1 cuts.

    Time complexity: O(1).
*/
