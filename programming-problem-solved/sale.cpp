#include<iostream>
#include<stdio.h>
#include<algorithm>
#include<math.h>

using namespace std;

int main()
{
int n,m,i,j,sum = 0;
    scanf("%d%d",&n,&m);

    int t[n];

    for(i=0;i<n;i++) scanf("%d",&t[i]);
    sort(t,t+n);

    for(i=0;i<m;i++) {
        if(t[i]<0) sum+=t[i];
    }
    printf("%d\n",-sum);

    return 0;
}
