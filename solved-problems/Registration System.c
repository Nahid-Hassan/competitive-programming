#include<stdio.h>
#include<string.h>

int a[5000000];

int main()
{
    int n, i = 0, j, check = 1;
    scanf("%d",&n);
    getchar();
    char name[n][33];

    while(i < n) {
        gets(name[i]);
        a[i] = 0;
        if(i < 1) {
            printf("OK\n");
        }
        else if(i>0){
            for(j = 0; j <= i - 1; j++) {
               printf("%s & %s\n",name[i],name[j]);
                if(strcmp(name[i],name[j])==0) {
                    a[j] = a[j] + 1;
                    check = 0;
                    printf("------");
                    printf("%s%d\n",name[i],a[j]);
                    goto l1;

                }
            }
            printf("%d\n",check);
        }if(check==1 && i > 1) printf("OK\n");
        l1: i++;
    }

    return 0;
}
