#include<stdio.h>
#include<string.h>

int main()
{
    int n,k,i,j,count = 0;
    char ch;
    scanf("%d%d",&n,&k);
    getchar();
    for(i=0;i<n;i++) {
        for(j=0;j<k;j++) {
            scanf("%c",&ch);
            getchar();
            if(ch=='C' || ch=='M' || ch=='Y') count++;
        }
    }
    if(count>=1) printf("#Color\n");
    else printf("#Black&White\n");

    return 0;
}
