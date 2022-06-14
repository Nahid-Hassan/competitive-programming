#include<stdio.h>

int main()
{
    int i,test = 0,count=0;
    long long int nearly_lucky_number,temp=0;

    scanf("%I64d",&nearly_lucky_number);
    //scanf("%lld",&nearly_lucky_number);

    temp = nearly_lucky_number;
    //printf("temp = %d",temp);
    //printf("%d",nearly_lucky_number);
    //count digit
    while(temp > 0)
    {
        temp = temp/10;
        test++;
    }
    //printf("test = %d\n",test);
    int lary[test];

    for(i=0;i<test;i++)
    {
        lary[i] = nearly_lucky_number%10;
        //printf("lary[%d] = %d\n",i,lary[i]);

        if(lary[i] == 4 || lary[i] == 7)
        {
            count++;
        }
        nearly_lucky_number = nearly_lucky_number / 10;
    }
    //printf("count = %d\n",count);

    if(count == 4 || count == 7 ||count==47 || count==74 || count == 447 || count== 474 || count == 477)
    {
        printf("YES\n");
    }
    else printf("NO\n");
}
