#include<stdio.h>
#include<math.h>

int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    while(a!=-1 && b!=-1)
    {
        if(abs(a-b) >= 50) {
            printf("%d\n",abs(100-abs(a-b)));
        }else {
            printf("%d\n",abs(a-b));
        }
        scanf("%d%d",&a,&b);
    }
}
