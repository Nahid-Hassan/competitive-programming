#include<stdio.h>

int main()
{
    int x,i=5,ans,sum=0;

    scanf("%d",&x);

    while(i>0)
    {
        ans=x/i;
        x=x%i;
        sum+=ans;
        if(x==0)break;
        i--;
    }
    printf("%d\n",sum);
}
