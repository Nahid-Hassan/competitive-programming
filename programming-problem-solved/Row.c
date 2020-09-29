#include<string.h>
#include<stdio.h>

int main()
{
    int m, i, j, checkOne=0, checkZero=0;

    scanf("%d",&m);
    getchar();

    char a[m];

    gets(a);

    if(m == 1) {
        if(!strcmp(a,'1')) printf("Yes\n");
        else printf("No\n");
    }
    else if(m == 2) {
        if(!strcmp(a,"10") || !strcmp(a,"11") || !strcmp(a,"01")) printf("Yes\n");
        else printf("No\n");
    }
    else{
        if(a[0]=='1') {
            for(i = 1, j = 2; i < m; i+2, j+2) {
                if(a[i]=='0') {
                    checkZero = 0;
                }
                else {
                    checkZero = 1;
                    break;
                }
                if(a[j] == '1'){
                    checkOne = 0;
                }
                else {
                    checkOne = 1;
                    break;
                }
            }
        }
        else {
            for(i = 1, j = 2; i < m; i+2, j+2) {
                if(a[j]=='0') {
                    checkZero = 0;
                }
                else {
                    checkZero = 1;
                    break;
                }
                if(a[i] == '1'){
                    checkOne = 0;
                }
                else {
                    checkOne = 1;
                    break;
                }
            }
        }
    }
    if(checkOne==0 && checkZero ==0) printf("Yes\n");
    else  printf("No\n");

    return 0;
}

