#include<stdio.h>

int main()
{
    int n,i,j;

    scanf("%d",&n);

    if(n==1) {printf("Poor Alex\n");return 0;}

    int a[n],b[n];

    for(i=0;i<n;i++)
    {
        scanf("%d%d",&a[i],&b[i]);
        if(i==0) continue;
        for(j=i;j<n;j++)
        {
            //printf("%d %d\n",i,j);
            //printf("a[%d] = %d <a[%d] = %d)\n",i,a[i],j,a[j]);
            //printf("b[%d] = %d >b[%d] = %d)\n",i,b[i],j,b[j]);

            //printf("%d  %d  %d  %d\n",a[i],b[i],a[j],b[j]);
            if((a[i-1]<a[j]) && (b[i-1] > b[j]))
            {
                //printf("%d  %d\n",a[i],a[j]);
                //printf("%d  %d\n",a[i],a[j]);
                printf("Happy Alex\n");
                return 0;
            }
        }
    }
    printf("Poor Alex\n");

    return 0;
}
