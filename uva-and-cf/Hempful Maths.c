#include<stdio.h>
#include<string.h>

int main()
{
    char helpMath[110];

    scanf("%s",helpMath);

    int one = 0, two = 0, three = 0 , i = 0;
    int len = strlen(helpMath);
    int check;

    //count how many one two and three's that string
    for(i=0;i<len;i=i+2)
    {
        check = helpMath[i];

        if(check == 49) one++;
        else if(check == 50) two++;
        else if(check == 51 ) three++;
    }

    //print one two and three separated by +
    if(one>0 ) {
        for(i=1;i<=one-1;i++) printf("1+");
        if(two==0 && three ==0) printf("1\n");
        else printf("1+");
    }
    if(two>0) {
        for(i=1;i<=two-1;i++) printf("2+");
        if(three == 0) printf("2\n");
        else printf("2+");
    }
    if(three>0) {
        for(i=1;i<=three-1;i++) printf("3+");
        printf("3\n");
    }

}


















/*
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

int main()
{
    char m[110],temp[60];int i,j,len;
    scanf("%s",m);
    printf("string s = %s\n",m);
    int a;

    len = strlen(m);
    printf("len = %d\n",len);

    for(i=0,a=0;i<len;i=i+2,a++)
    {
        //printf("%d\n",m[i]);
        temp[a] = m[i];
        //printf("i = %d temp[%d] = %d\n",i,a,temp[a]);
    }
    int min = 0;
    for(i=0;i<a;i++)
    {
        for(j=i+1;j<a;j++)
        {
            if(temp[i] >= temp[j])
            {
                min = temp[i];
                printf("min = ",temp[i]);
                temp[i] = temp[j];
                printf("     %d & %d\n",temp[i],temp[j]);
                temp[i] = min;
                //printf("%d\n",temp[i]);
            }
        }
    }
    for(i=0;i<a-1;i++) printf("%d+",temp[i]);
    printf("%d\n",temp[i]);

}
*/
