#include<stdio.h>

int main()
{
    int n, a[125],b[125];
    int i;
    scanf("%d",&n);

    for(i=0;i<n;i++) {
        scanf("%d%d",&a[i],&b[i]);
        if(a[i] >= 0 && a[i] <= 10 && b[i] >=0 && b[i] <= 10) {
        printf("Case %d: %d\n",(i+1),(a[i]+b[i]));
        }
    }
    return 0;
}
