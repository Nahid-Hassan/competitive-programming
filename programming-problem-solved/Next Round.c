#include<stdio.h>

int main()
{
    int n,k,count=0,temp;
    scanf("%d%d",&n,&k);
    int next[n];
    int i;

    for(i=0;i<n;i++)
    {
        scanf("%d",&next[i]);
    }
    temp = next[k-1];

    if(temp>0)
    {
        for(i=0;i<n;i++)
        {
            if(temp<=next[i]) count++;
        }
        printf("%d\n",count);
    }
    else if(temp==0){
        for(i=0;i<n;i++)
        {
            if(temp<next[i]) count++;
        }
        printf("%d\n",count);
    }

}
