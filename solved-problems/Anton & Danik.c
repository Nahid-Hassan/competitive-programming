/*
##
        Name: Md. Nahid Hassan
        Computer Science and Engineering Dept.
        University of Rajshahi.
*/
#include<stdio.h>
#include<string.h>

int main()
{
    int nOfGamesPlay,countD = 0,i;
    scanf("%I64d",&nOfGamesPlay);
    char s[nOfGamesPlay];
    getchar();
    gets(s);

    for(i=0;i<nOfGamesPlay;i++) {
        if(s[i]=='D') countD++;
    }
    if((nOfGamesPlay-countD) == countD) printf("Friendship\n");
    else if((nOfGamesPlay-countD)>countD) printf("Anton\n");
    else printf("Danik\n");

    return 0;
}
