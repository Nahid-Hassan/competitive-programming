#include<stdio.h>
#include<math.h>


int main()
{
    long long int a,b,m,aPowerb;


    while(1)
    {
        scanf("%lld%lld%lld",&a,&b,&m);

        if(a!=0 && b!=0 && m!=0)
        {
            aPowerb = pow(a,b);

            printf("%lld\n",aPowerb);

            printf("%lld\n",(aPowerb%m));
        }
        else {
            return 0;
        }
    }

    return 0;
}
