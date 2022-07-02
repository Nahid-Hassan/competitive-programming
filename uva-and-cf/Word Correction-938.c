#include<stdio.h>

int main()
{
    int numberOfLetters,i;

    scanf("%d",&numberOfLetters); //5

    char w[numberOfLetters];
    scanf("%s",&w);     //weird

    for(i=0;i<numberOfLetters;i++)
    {
        if((w[i]=='a'||w[i]=='e'||w[i]=='o'||w[i]=='u'||w[i]=='i'||w[i]=='y')&&(w[i+1]=='a'||w[i+1]=='e'||w[i+1]=='o'||w[i+1]=='u'||w[i+1]=='i'||w[i+1]=='y'))
        {
            w[i + 1] = w[i];
            continue;
        }
        else
        {
            printf("%c",w[i]);
        }
    }
    printf("\n");
}
