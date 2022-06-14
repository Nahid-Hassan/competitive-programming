#include<stdio.h>

int main()
{
    int num[10],i,j, key;

    printf("Enter key number : ");
    scanf("%d",&key);

    for(i=0;i<10;i++)
    {
        scanf("%d",&num[i]);
    }
    printf("num[%d] = %d\n",i,num[i]);
    for(i=0;i<10;i++)
    {
        if(key == num[i]) printf("Index : %d\n",i);
       // if(key == num[j]) printf("Index : %d\n",j);
    }
}
