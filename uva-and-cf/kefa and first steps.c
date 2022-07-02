#include<stdio.h>

int main()
{
    int testCase,count,temp,i=0,number,max = 0,a=0;
    int maxTemp = 0;

    scanf("%d",&testCase);
    count = 1;
    scanf("%d",&number);
    temp = number ;

    //check non-decrasing segment
    for(i=1;i<testCase;i++)
    {
        scanf("%d",&number);                  ///In this program there is a lot of logical problem
                                        ///very soon i will fix this logical problem
        if(temp<=number)
        {
            printf("Temp = %d Number = %d\n",temp,number);
            count++;
            temp = number;
           // c = 0;
            continue;
        }
        //if first if statement is flase then 2nd else if open if i>1
        else if(i>=1)
        {
         //   d = 0;
            a++;

            if(a<=1) max = count;
            if(a>=2)
            {
                maxTemp = count;
                if(max <= maxTemp) maxTemp = maxTemp;
                else maxTemp = max;
            }
            count = 1;
            temp =  number;
        }

    }
    printf("i = %d a =%d\n",i,a);
    if(i<=1) maxTemp = count;
    else if(a==0) maxTemp = count;
    else if(a==1) maxTemp = max;
    printf("%d\n",maxTemp);

}
