#include<stdio.h>

int main()
{
    int testCase, m, n, i, temp;

    scanf("%d",&testCase);

    for(i = 1; i <= testCase; i++){
        scanf("%d%d",&m,&n);
        if(m == 1 || n == 1) printf("Case %d: %d\n",i,m*n);
        else if(m == 2 || n == 2) {
            temp = m * n/ 8 * 4; /*for worst case*/
            if((m * n) % 8 == 2) printf("Case %d: %d\n",i,temp+2);
            else if((m * n) % 8 == 4 || (m * n) % 8 == 6) printf("Case %d: %d\n",i,temp+4);
            else {
                printf("Case %d: %d\n",i,((m * n) + 1) / 2);
            }
        }
        else printf("Case %d: %d\n",i,((m * n) + 1) / 2);
    }

    return 0;
}
