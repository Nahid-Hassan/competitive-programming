#include<stdio.h>

int main(void)
{
    int  a,b,c,d,*x,*y;

    a = 15;
    x = &a;

    printf("a = %x &a = %x *x=%x\n",a,&a,x,*x);
}
