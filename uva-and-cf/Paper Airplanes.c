#include<stdio.h>

int main()
{
    int k,n,s,p,t=0,min,m=0;

    scanf("%d%d%d%d",&k,&n,&s,&p);
    if(n%s!=0) t = 1;
        min = (k*((n/s)+t));
        if(min%p!=0)m=1;
        printf("%d\n",(min/p)+m);

    return 0;
}
/*
    Simulation: no need any simulation
        if(n>=s) {
        if(n%s!=0) t = 1;
        min = (k*((n/s)+t));
        if(min%p!=0)m=1;
        printf("%d\n",(min/p)+m);
    } else {
        printf("%d\n",k);
    }

*/
/*
    Name: Md. Nahid Hassan
    Computer Science and Engineering Dept. University Of Rajshahi
*/
