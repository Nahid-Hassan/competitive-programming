#include<stdio.h>
#include<string.h>

int main()
{
    int n,i,zCount = 0,oCount=0;
    scanf("%d",&n);
    char st[n];
    getchar();
    gets(st);

    for(i=0;i<n;i++) {
        if(st[i]=='0') zCount++;
    }
    oCount = n - zCount;
    if(oCount==zCount) printf("0\n");
    else if(zCount>oCount)printf("%d\n",(zCount-oCount));
    else printf("%d\n",oCount-zCount);
    return 0;
}
