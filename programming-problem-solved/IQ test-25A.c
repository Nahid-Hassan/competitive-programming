#include<stdio.h>

int main()
{
    int n,i,even=0,odd=0;
    scanf("%d",&n);
    int number[n];
    int oddIndex=0,evenIndex=0;

    for(i=0;i<n;i++)
    {
        scanf("%d",&number[i]);
        if(number[i]%2 ==0) {
            even++;
            evenIndex =  i;
        }
        else {
            odd++;
            oddIndex = i;
        }
    }
    if(even>odd)
    {
        printf("%d\n",oddIndex+1);
    }
    else printf("%d\n",evenIndex+1);
}
