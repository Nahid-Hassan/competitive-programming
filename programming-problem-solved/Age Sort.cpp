#include<iostream>
#include<stdio.h>
#include<algorithm>

using namespace std;

int main()
{
    long int n, i;

    while(1==scanf("%ld",&n) && n != 0) {
        long int age[n];
        for(i=0;i<n;i++) scanf("%ld",&age[i]);
        sort(age,age+n);

        for(i=0;i<n-1;i++) printf("%ld ",age[i]);
        printf("%ld\n",age[i]);
    }

    return 0;
}
