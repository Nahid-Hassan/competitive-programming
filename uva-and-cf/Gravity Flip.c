#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);

    int number[n],i,j,temp;

    for(i=0;i<n;i++) {scanf("%d",&number[i]);}
    for(i=0;i<n;i++) {
        for(j=0;j<n-i-1;j++) {
            if(number[j] >= number[j+1]) {
                temp = number[j];
                number[j] = number[j+1];
                number[j+1] = temp;
            }
        }
    }
    for(i=0;i<n;i++) printf("%d ",number[i]);

    printf("\n");

    return 0;
}
