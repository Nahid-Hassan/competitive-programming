/**
#################################################
#   Name: Md. Nahid Hassan                      #
#   Email: nahid.cseru@gmail.com                #
#   Department: Computer Science & Engineering  #
#   University Name: University of Rajshahi     #
#################################################
                                              **/


#include<stdio.h>

int main()
{
    int testCase,a,b;
    int sum = 0,i,j,k,count=0;

    scanf("%d",&testCase);

    for(i=1;i<=testCase;i++)
    {
        scanf("%d%d",&a,&b);   //input A th number to B th (inclusive) number,
                                //which are divisible by 3.
        count = 0;

        for(j=a;j<=b;j++)
        {
            sum = 0;             //count divisible by 3 a to b
            for(k=1;k<=a;k++)
            {
                sum += k;         //working like 123,1234,12345,123456,1234567
            }
            if(sum % 3 == 0)
            {
                count++;
            }
            a++;             //a++
        }
        printf("Case %d: %d\n",i,count);
    }
    return 0;
}
