#include<stdio.h>

int main()
{
    int year,i,j,temp[4],Temp,anotherTemp,extraTemp,k,count = 0;
    int check=0;
    scanf("%d",&year);     //2013                 // year (1000 ≤ year ≤ 9000)

    if(year>= 1000 && year<=9000)
    {
        for(i=year+1;i<=9012;i++)   //2014
        {
            count = 0;
            anotherTemp = i;
            extraTemp = i;
            Temp = i;
            for(j=0;j<4;j++)
            {
                temp[j] = anotherTemp%10;    //4 , 1,0,2
                anotherTemp = anotherTemp/10;
            }
            for(j=0;j<4;j++)
            {
                extraTemp = Temp;
                for(k=0;k<4;k++)
                {
                    check = extraTemp%10;   //8,8,9,1
                    if(temp[j] == check) count++; //8
                    extraTemp = extraTemp/10;
                }

            }
            if(count == 4)
            {
                printf("%d\n",i);
                break;
            }   
            else if(count>4) continue;
        }
    }
}
