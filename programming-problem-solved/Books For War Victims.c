#include<stdio.h>

int main()
{
    int N,needBooks=0,temp;

    scanf("%d",&N);

    needBooks = N/3;
    temp = N%3;
    if(temp !=0 )
    {
        needBooks = needBooks+1;
        printf("%d\n",needBooks);
    }
    else {
        printf("%d\n",needBooks);
    }

}
