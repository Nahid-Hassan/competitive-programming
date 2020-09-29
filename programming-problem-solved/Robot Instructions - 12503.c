/**This is a wrong solution**/

#include<stdlib.h>
#include<string.h>
#include<stdio.h>

int main()
{
    int testCase, numberOfInstructions;
    char ch[15],ch1[2],ch2[1];
    int check[110],i,total = 0,integerV,s;

    scanf("%d",&testCase);

    while(testCase--) {
        scanf("%d",&numberOfInstructions);
        i = 1;
        total = 0;
        getchar();
        while(numberOfInstructions--) {
            gets(ch);
            /*printf("strlen = %d\n",strlen(ch));*/
            if(ch[0] == 'L') {
                total -= 1;
                check[i] = -1;
                /*printf("if---     %d %d\n",total,check[i]);*/
            } else if(ch[0] == 'R') {
                total +=1;
                check[i] = 1;
                /*printf("else if---1  %d %d\n",total,check[i]);*/
            } else if(strlen(ch) == 9) {
                ch2[0] = ch[8];
                s = atoi(ch2);
                /*printf("s= %d\n",s);*/
                total += check[s];
                check[i] = check[s];
                /*printf("if---     %d %d\n",total,check[i]);//check[atoi(ch[8])];*/
            }
            else if(strlen(ch) == 10) {
                ch1[0] = ch[8];
                ch1[1] = ch[9];
                integerV = atoi(ch1);

                total += check[integerV];
                check[i] = check[integerV];
            }
            i++;
        }
         printf("%d\n",total);
    }

    return 0;
}
/**
##This is a right solution##

#include<stdio.h>
#include<string.h>
int main()
{
    char a[30];
    int t,n,s,e,i,b[110];
    while(scanf("%d",&t)==1)
    {
        while(t--)
        {
            scanf("%d",&n);
            s=0;
            for(i=1;i<=n;i++)
            {
                scanf("%s",a);
                if(strcmp(a,"LEFT")==0)
                {
                    s-=1;
                    b[i]=-1;
                }
                else if(strcmp(a,"RIGHT")==0)
                {
                    s+=1;
                    b[i]=1;
                }
                else
                {
                    scanf("%s%d",a,&e);
                    s+=b[e];
                    b[i]=b[e];
                }
            }
            printf("%d\n",s);
        }
    }
return 0;
}
**/
/**
    SIMULATION:
        first check if ch      == LEFT then total += -1;
                    else if ch == RIGHT then total += 1;

        if ch == SAME AS (1 - 9) etc
                    then ch2[0] = ch[8] ;
                    s = atoi(ch2); change to string to integer;

        else if ch = same as (10-99) etc
                    then ch1[0] = ch[8];
                         ch1[1] = ch[9];
                         integerV = atoi(ch1); change string to integer;
**/
