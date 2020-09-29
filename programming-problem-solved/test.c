
#include<stdio.h>
#include<math.h>
#include<string.h>

int main()
{
int n;
while(scanf("%d",&n)==1)
{
if(n==0) break;
char c[102],s[102];
int len,m,a,i,j,k;
scanf("%s",c);
len=strlen(c);
a=len/n;
k=a;
m=0;
j=0;
for(i=a-1;i<len;i=i+a)
{
for(j=i;j>=m;j--)
{
printf("%c",c[j]);
}
m=m+k;
}
printf("\n");
}
return 0;
}
