#include<stdio.h>

int main()
{
    int n,vnum,count=0,i,fdsum=0,ldsum=0,M,N;

    scanf("%d",&n);   //52434

    vnum = n;   //52434

    while(n>0)
    {
        n=n/10;
        count++;
    }
    //printf("count = %d\n",count);

    int anum[count];

    if(count%2!=0)
    {
        for(i=0; i<count; i++)
        {
            if(i==(count/2))
            {
                vnum = vnum/10; //1
                continue;
            }
            else if(i<(count-1)/2)
            {
                anum[i] = vnum%10;  //1
                vnum = vnum/10;  //12
                fdsum = fdsum+anum[i]; // 0+1 =1
                M=fdsum; //1
            }

            else if(i >= (count+1)/2)
            {
                anum[i] = vnum%10; //1
                vnum = vnum/10;  //0
                ldsum = ldsum+anum[i]; //0+1 = 1
                N=ldsum;  // 1
            }
            //printf("fdsum = %d\n",fdsum);
            //printf("ldsum = %d\n",ldsum);
        }
    }
    //printf("M = %d & N = %d\n",M,N);

    if(M==N)
    {
        printf("Balance Number\n");
    }
}
