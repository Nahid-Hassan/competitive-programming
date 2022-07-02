#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
    int n,i,total =0;
    char string[10];

    scanf("%d",&n);
    //printf("%d\n",n);

    for(i=1;i<=n;i++)
    {
        scanf("%s",string);
        //printf("%s\n",string);

        if(string[1] == '+')
        {
            total +=1;
        }
        else if(string[1] == '-')
        {
            total -=1;
        }
    }
    printf("%d\n",total);
}
