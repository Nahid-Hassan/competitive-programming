#include<stdio.h>

int main()
{
  long long int n;

  scanf("%lld",&n);
  if(n==1000000000) printf("%lld\n",8888888898);
  else if(n<10) printf("%lld\n",n);
  else if(n<100) printf("%lld\n",(2*(n+1)-11));
  else if(n<1000) printf("%lld\n",(3*(n+1)-111));
  else if(n<10000) printf("%lld\n",(4*(n+1)-1111));
  else if(n<100000) printf("%lld\n",(5*(n+1)-11111));
  else if(n<1000000) printf("%lld\n",(6*(n+1)-111111));
  else if(n<10000000) printf("%lld\n",(7*(n+1)-1111111));
  else if(n<100000000) printf("%lld\n",(8*(n+1)-11111111));
  else if(n<10000000000) printf("%lld\n",(9*(n+1)-111111111));
}


/*------------------------------------------------------------------------------------------------------------------*/
/*
    552B - Vanya and Books

    We can find out a formula for this problem:

    for n < 10 answer will be n = n - 1 + 1 = 1 * (n + 1) - 1;

    for n < 100 answer will be 2 * (n - 9) + 9 = 2 * n - 9 = 2 * n - 10 - 1 + 2 = 2 * (n + 1) - 11;

    for n < 1000 answer will be 3 * (n - 99) + 2 * (99 - 9) + 9 = 3 * n - 99 - 9 = 3 * n - 100 - 10 - 1 + 3 = 3 * (n + 1) - 111;

    so for n < 10sz answer will be ;

    Time complexity O(sz), where sz is the length of n.

    We also could just try 10 options n < 10, n < 100, ..., n < 109, n = 109 and solve problem for each option.

    UPD: Don't use function pow() to find powers of 10, because it doesn't work right sometimes.

*/
/*------------------------------------------------------------------------------------------------------------------*/
/*
 long long int numberOfBooksOnLibrary;
    long long int i,total=0,check=0;

    scanf("%I64d",&numberOfBooksOnLibrary);

    for(i=1;i<=numberOfBooksOnLibrary;i++)
    {
        check = i;
        while(check>0)
        {
            check = check / 10;
            total++;
        }
    }
    printf("%lld\n",total);

    return 0;
*/
