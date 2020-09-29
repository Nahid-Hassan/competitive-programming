#include <stdio.h>

int main()
{
     int testCase,i,j,m;
    long int w;
    scanf("%d",&testCase);
    for(i =1; i <= testCase; i++) {
        scanf("%ld",&w);
        if(w%2!=0)
            printf("Case %d: Impossible\n",i);
            else {
                m = 1;
                while(w%2==0) {
                    m*=2;
                    w/=2;
                }
                printf("Case %d: %ld %d\n",i,w,m);
            }
    }
    return 0;
}
