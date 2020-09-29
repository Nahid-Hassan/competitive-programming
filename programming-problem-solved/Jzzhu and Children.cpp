#include <bits/stdc++.h>
#include<algorithm>
#include<iostream>
#define p cout
#define s cin
#define l long long
#define m min
#define r return
#define e endl
#define d int
using namespace std;

int main()
{
    d n,m;
    s>>n>>m;
    d a[10000];
    d i,j,la,haha = n;

    for(i = 0, j = n; i < 10000; i++) {
        if(i<haha) {
            s>>a[i];
        }
        if(a[i] >= m) {
            continue;
        } else {
            if(a[j]==0) break;
            a[j] = a[i] - m;
            la = i;
            j++;
        }
    }
    p<<la<<e;

    r 0;
}
/*
##al-amin

#include<stdio.h>
int main()
{
	int n,m,a[101],i,max=0,pos;
	scanf("%d%d",&n,&m);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
		if(a[i]/m==0) a[i]=0;
		else if(a[i]%m==0){
			a[i]=a[i]/m;
			if(a[i]==1) a[i]=0;
		}

		else a[i]=a[i]/m+1;
	}
	for(i=0;i<n;i++){
		if(max<=a[i]){
			pos=i+1;
			max=a[i];
		}
		//	printf("%d %d",max,pos);
		}

	printf("%d\n",pos);

	return 0;
}
*/
