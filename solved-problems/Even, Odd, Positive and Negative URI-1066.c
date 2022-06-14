#include<stdio.h>

int main()
{
    int num[5],i,even = 0, positive = 0, n =0;

    for(i=0;i<5;i++){
        scanf("%d",&num[i]);

        if(num[i]%2 == 0) {
            even = even +1 ;
        }
        if(num[i]>0) {
            positive = positive +1;
        }
        if(num[i]<0) {
            n = n +1;
        }
    }
    printf("%d valor(es) par(es)\n%d valor(es) impar(es)\n%d valor(es) positivo(s)\n%d valor(es) negativo(s)\n",even,5-even,positive,n);
}



