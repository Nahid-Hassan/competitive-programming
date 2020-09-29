#include<stdio.h>
#include<string.h>

int main()
{
    int n;

    scanf("%d",&n);

    char stone[n];
    int count = 0, i,j;

    scanf("%s",stone);

    for(i=0,j=0;i<n;i++,j++)
    {
        if(stone[i] == stone[j+1]) count++;
    }
    printf("%d\n",count);

}
