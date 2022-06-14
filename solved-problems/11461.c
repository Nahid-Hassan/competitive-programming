#include<stdio.h>
#include<math.h>

int main()
{
    int a,b;
    int sqrt_a,sqrt_b;

    scanf("%d%d",&a,&b);

    while(1)
    {
        if(a==0 && b==0) break;
        else if(a==1 && a < b) {
            sqrt_b = sqrt(b);
            printf("%d\n",sqrt_b);
        }
        else if(a<b){
            sqrt_a = sqrt(a);
            sqrt_b = sqrt(b);
            printf("%d\n",sqrt_b-sqrt_a);
        }
        else if(a==b) {
            sqrt_a = sqrt(a);
            if(sqrt_a * sqrt_a == a) {
                printf("%d\n",1);
            }
            else {
                printf("%d\n",0);
            }
        }

        scanf("%d%d",&a,&b);
    }

    return 0;
}
