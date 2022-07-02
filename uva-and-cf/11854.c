#include<stdio.h>

int main()
{
    long int a,b,c;

    while(1)
    {
        scanf("%ld%ld%ld",&a,&b,&c);
        if(a==0 && b==0 && c==0)
        {
            break;
        }
        else if(((a*a + b*b) == c*c)||((a*a + c*c) == b*b)||((c*c + b*b) == a*a))
        {
            printf("right\n");
        }
        else
        {
            printf("wrong\n");
        }
    }

    return 0;
}
