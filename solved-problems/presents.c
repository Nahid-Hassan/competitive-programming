#include<stdio.h>


int main()
{
    int a[110],ans[110],n;
    while(scanf("%d",&n)!=EOF)
    {
        for(int i=1;i<=n;i++)
        {
            //scanf("%d",a+i);
            scanf("%d",&a[i]);
            ans[a[i]]=i;
        }
        for(int i=1;i<=n;i++)
            if(i!=n)
            printf("%d ",ans[i]);
            else
            printf("%d\n",ans[i]);
    }
    return 0;
}
