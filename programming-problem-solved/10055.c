#include<stdio.h>
int main()
{
    int long unsigned number1, number2;
    while(scanf("%lu %lu",&number1,&number2)==2)
    {
        if(number1> number2)
        {
            printf("%lu\n",number1-number2);
        }
        else
        {
            printf("%lu\n",number2-number1);
        }
    }

    return 0;
}
