#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int number[n];
    int i,sum = 0,total = 0;

    for(i=0;i<n;i++) {scanf("%d",&number[i]);sum+=number[i];}

    for(i=0;i<n;i++) {
        total += number[i];
        if(sum%2!=0) {
            if(total >= (sum/2)+1) break;
        } else if (total >= (sum/2)) break;
    }
    printf("%d\n",i+1);

    return 0;
}
