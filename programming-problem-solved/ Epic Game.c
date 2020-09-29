#include<stdio.h>

int gcd(int a,int b);

int main()
{
    int simon,antisimon,stone;
    int a = 0;

    scanf("%d%d%d",&simon,&antisimon,&stone);

    while(stone)
    {
        int returnGcd=0;
        a++;

        if(a%2==0) {
            returnGcd = gcd(antisimon,stone);
            if(stone<returnGcd) break;
            stone = stone - returnGcd;
        }
        else {
            returnGcd = gcd(simon,stone);
            stone = stone - returnGcd;
        }
    }
    if(a%2!=0) printf("0\n");
    else printf("1\n");
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
