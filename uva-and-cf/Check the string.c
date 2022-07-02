#include<stdio.h>
#include<string.h>

int main()
{
    char ch[5010];

    scanf("%s",ch);

    int chlen=strlen(ch);
    //printf("%d\n",chlen);

    int i,counta=0,countb=0,countc=0;
    int a=0,b=0,c=0,checka=0,checkb=0,checkc=0,j;
    for(j=0;j<chlen;j++)
    {
        //printf("----------\n");
        if(ch[j] == 'a') {a = j;checka =1;}
        else if(ch[j] == 'b') {b = j; checkb=1;}
        else {c = j; checkc=1;}
        //printf("%d %d %d\n",checka,checkb,checkc);
        //printf("%d %d %d\n",a,b,c);
        if(checka == 1 && checkb == 1 && checkc==1) break;
    }
    int sum = checka+checkb+checkc;
    if(sum<=2) {printf("NO\n");return 0;}
    if(ch[0] == 'b' || ch[0] == 'c') {printf("NO\n");return 0;}
    else if((a>b && a>c) || (a<c && c<b)) {printf("NO\n");return 0;}
    else
    {
        for(i=0;i<chlen;i++)
        {
            if(ch[i] == 'a') {counta++;continue;}
            else if(ch[i] =='b') {countb++;continue;}
            else {countc++;continue;}
        }
    }
    //printf("%d %d %d\n",counta,countb,countc);
    if(counta==countc || countb==countc) printf("YES\n");
    else printf("NO\n");

}
