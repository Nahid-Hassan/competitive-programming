#include<stdio.h>

int gcd(int a,int b);

int main()
{
    int G,m,j,N;

    while(1)
    {
        scanf("%d",&N);
        if(N==0) break;
        G=0;
        for(m=1;m<N;m++)
        {
            for(j=m+1;j<=N;j++)
            {
                G+=gcd(m,j);
            }
        }
        printf("%d\n",G);
    }
    return 0;
}

int gcd(int a,int b)
{
    int i,GCD;

    for(i = 1; i <= a && i <= b; i++)
    {
        if(a % i == 0 && b % i == 0)
            GCD = i;
    }
    return GCD;
}



