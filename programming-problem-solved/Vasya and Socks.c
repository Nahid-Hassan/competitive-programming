#include<stdio.h>

int main()
{
    int n,m,newSocks=0;

    scanf("%d%d",&n,&m); //10 2

    while(n>0)
    {
        newSocks++;
        if(newSocks%m==0)newSocks++;
        n--;
    }
    printf("%d\n",newSocks);
    return 0;
}
