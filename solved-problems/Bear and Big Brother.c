/*
##
        Name: Md. Nahid Hassan
        Computer Science and Engineering Dept.
        University of Rajshahi.
*/
#include<stdio.h>

int main()
{
    int a,b;
    int i = 0;
    scanf("%d%d",&a,&b);

    while(1) {
        a = a*3;
        b = b*2;
        i++;
        if(a>b) break;
    }
    printf("%d\n",i);

    return 0;
}
