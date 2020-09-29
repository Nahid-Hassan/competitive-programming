#include <stdio.h>

int main(void)
{
    int n, m, a ;
    scanf("%d%d", &n, &m) ;

    int lowerBound = (n+1)/2 ;
    a = (lowerBound+m-1)/m*m ;
    if(a>n)
        a = -1 ;

    printf("%d\n", a) ;

    return 0 ;
}
