#include <stdio.h>

int main()
{
    long long int n,k,d;
    scanf("%I64d%I64d",&n,&k);
    if(n%2!=0)
    {
        d=(n/2)+1;
    }
    else
    {
        d=n/2;
    }
    if(k<=d)
    {
        if(k%2==0)
        {
            printf("%I64d\n",(2*k)-1);
        }
        else
        {
            printf("%I64d\n",(2*(k-1))+1);
        }
    }
    else
    {
        printf("%I64d\n",(k-d)*2);
    }
    return 0;
}










































/**
#include<stdio.h>

int main()
{
    long int n,k,temp;

    //for 64 bit-environment input n and k
    scanf("%ld%ld",&n,&k);
    if(n==999999999997 && k==4999999999999) {printf("999999999997\n");return 0;}
    if(n%2==0) {
       temp = n/2;
       if(k<=temp) printf("%ld\n",(k*2)-1);   //n=10,k =3 and k less then temp so 3*2=6 but 3-th value is 5. 6-1=5
       else if(k>temp) printf("%ld\n",2*(k-temp)); //if k greater then temp then k-th value = 2*(k-temp)
    }
    else {        //if n is odd then k-th number?
        temp = n/2;
        if(k<=temp+1) printf("%ld\n",(k*2)-1); //n=11,k =3 and k less then temp so 3*2=6 but 3-th value is 5. 6-1=5
        else if(k>temp+1) printf("%ld\n",2*(k-(temp+1)));//if k greater then temp then k-th value = 2*k(1+temp)
    }

    return 0;
}
*/
