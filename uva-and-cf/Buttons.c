#include<stdio.h>

int main()
{
    int buttonNumber,i,totalCase=0;

    scanf("%d",&buttonNumber);

    if(buttonNumber==1) {
        printf("1\n");
        return 0;
    }
    else if(buttonNumber==2) {
        printf("3\n");
        return 0;
    }
    else if(buttonNumber>2)
    {
        for(i=2;i<=buttonNumber-1;i++)
        {
            totalCase += ((buttonNumber-i)*i+1);
        }
    }

    printf("%d\n",totalCase+(buttonNumber+1));
}
