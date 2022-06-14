#include<cstdio>
#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
    int count_d = 0;
    int n, sum = 0, total = 0;
    scanf("%d",&n);
    int a[n],i;
    for(i = 0; i < n; i++) {
        scanf("%d",&a[i]);
        sum += a[i];
    }

    sort(a,a+i);
    reverse(a,a+i);

    for(i = 0;i < n; i++) {
        total += a[i];
        if(total > (sum)/2) break;
    }

    printf("%d\n",i+1);


    return 0;
}
