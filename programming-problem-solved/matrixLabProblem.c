#include<stdio.h>

int main()
{
    int m = 4, n =4, index,temp=5;
    int matix[m][n],count[m],check;

    //Read matrix element
    check = temp;

    for(m=0;m<4;m++)
    {
        count[m] = 0;
        for(n=0;n<4;n++)
        {
            scanf("%d",&matix[m][n]);
            if(matix[m][n] == 1)
            {
                count[m]++;
            }
        }
        if(temp > count[m])
        {
            temp = count[m];
            index = m;
        }

    }
    for(m=0;m<4;m++)
    {
        for(n=0;n<4;n++)
        {
            printf("%d ",matix[m][n]);
        }
        printf("\n");
    }
    if(check == 5) printf("-1\n");
    else printf("index = %d\n",index);

    return 0;
}
