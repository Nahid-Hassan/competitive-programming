#include<stdio.h>

int main()
{
    unsigned long int number,i,numberLength=0;

    scanf("%I64d",&number);
    unsigned long int temp = number;

    while(number>0)
    {
        number/=10;
        numberLength++;
    }
    number = temp;
    while(1)
    {
        while(number>0)
        {

        }
    }
}

/*
#include<stdio.h>

int main()
{
    int lucky_num,num,count=0,i;

    scanf("%d",&lucky_num);
    num=lucky_num;

    while(lucky_num>0)
    {
        lucky_num = lucky_num/10;
        count++;
    }
    int lucky_number[count],test=0;
    lucky_num = num;

    for(i=0;i<count;i++)
    {
        lucky_number[i] = num%10;
        if(lucky_number[i] == 4 || lucky_number[i] == 7) test++;
        num = num/10;
    }

    if(count == test) printf("YES\n");
    else if(lucky_num%4 == 0 || lucky_num%7 ==0) printf("YES\n");
    else printf("NO\n");

    return 0;
}
*/
