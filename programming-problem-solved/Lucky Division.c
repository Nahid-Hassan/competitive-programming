/*
if 4 & 7  or 4 and 7 dara divisible
*/

#include<stdio.h>

int main()
{
    int lucky_num,num,count=0,i;

    scanf("%d",&lucky_num);    //447
    num=lucky_num;           // 447

    while(lucky_num>0)
    {
        lucky_num = lucky_num/10;  //
        count++;    //3
    }
    int lucky_number[count],test=0;
    lucky_num = num;

    for(i=0;i<count;i++)
    {
        lucky_number[i] = num%10;    //4   7,4,4
        if(lucky_number[i] == 4 || lucky_number[i] == 7) test++;   //3
        num = num/10;
    }

    if(count == test) printf("YES\n");
    else if(lucky_num%4 == 0 || lucky_num%7 ==0 || lucky_num%47 == 0) printf("YES\n");
    else printf("NO\n");

    return 0;
}
