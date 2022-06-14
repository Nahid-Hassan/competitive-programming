#include<stdio.h>

int main()
{
    int x1,y1,x2,y2,cow_number,test_case,cx1,cy1,i;

    scanf("%d",&test_case);

    for(i=1;i<=test_case;i++)
    {
        //input rectangular area
        scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
        //input cow_number
        scanf("%d",&cow_number);
        //print case_number
        printf("Case %d:\n",i);

        //loop is running continuosuly... while cow_number == 0
        while(cow_number--)
        {
            scanf("%d%d",&cx1,&cy1);
            //cow er position jodi rectangular tir maje thake tahole YES else NO
            if(cx1 > x1 && cx1 < x2 && cy1 > y1 && cy1 < y2) printf("Yes\n");
            else printf("No\n");
        }
    }
}
