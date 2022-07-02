#include<stdio.h>

int main()
{
    int n,i;
    scanf("%d",&n);
    int magnet[n],count=0;

    for(i=0;i<n;i++)
    {
        scanf("%d",&magnet[i]);
        if(i==0) continue;

        if((magnet[i-1]) != (magnet[i]))
        {
            count++;
        }
    }
    printf("%d\n",count+1);
}
