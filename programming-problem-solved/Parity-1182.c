#include<stdio.h>

int main()
{
    int n,T,temp,count,i ,j;

    scanf("%d",&T);

    for(j=1;j<=T;j++)
    {
        scanf("%64d",&n);
        count = 0;
        //convert decimal to binary & count 1
        for(i=1;n>0;i++)
        {
            temp = n % 2;
            printf("temp = %d\n",temp);
            if(temp == 1) count++;
            n = n / 2;
            printf("n = %d\n",n);
            if(n==3) {
                count=count+2;
                break;
            }
            else if(n==2) {
                count=count+1;
                break;
            }
        }

        if(count%2 == 0) printf("Case %d: even\n",j);
        else if(count%2 != 0) printf("Case %d: odd\n",j);
    }

   return 0;
}
