#include<iostream>
#include<stdio.h>
#include<algorithm>
#include<stdlib.h>

#define max 3000

using namespace std;

int main()
{
    int testCase,i;
    int a[max],b[max];
    int check;

    while(scanf("%d",&testCase)==1) {
        check = 0;
        for(i=0;i<testCase;i++) scanf("%d",&a[i]);
        for(i=0;i<testCase-1;i++) {b[i]=abs(a[i+1]-a[i]);}
        sort(b,b+i);
        for(i=1;i<testCase;i++)
        {
            if(b[i]==b[i-1])
            {
            check=1; break;
            }
        }
        if(check==0) printf("Jolly\n");
        else printf("Not jolly\n");
    }

    return 0;
}
/*
#include<stdio.h>
#include<algorithm>
#include<stdlib.h>
using namespace std;
int main()
{
int n,c,b[3010],a[3010],i;
while(scanf("%d",&n)==1)
{
c=1;
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n-1;i++)
{
b[i]=abs(a[i+1]-a[i]);
}
sort(b,b+i);
for(i=1;i<n;i++)
{
if(b[i]==b[i-1])
{
c=0;
break;
}
}
if(c==0)
printf("Not jolly\n");
else
printf("Jolly\n");
}
return 0;
}
*/
