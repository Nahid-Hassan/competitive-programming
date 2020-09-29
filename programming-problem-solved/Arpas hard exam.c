#include<stdio.h>

int main()
{
    long int n;

    scanf("%I64d",&n);
    if(n==0) printf("%d\n",0);
    else if(n%4 == 1) printf("%d\n",8);
    else if(n%4 == 2) printf("%d\n",4);
    else if(n%4 == 3) printf("%d\n",2);
    else printf("%d\n",6);

    return 0;
}

