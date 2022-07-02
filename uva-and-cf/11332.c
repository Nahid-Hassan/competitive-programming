#include<stdio.h>

int main()
{
    long int N;

    while(1) {
        int sumRandomDigit = 0,total = 0,sum=0,s=1;
        scanf("%ld",&N);
        if(N==0) break;
        else if(N<10) {printf("%ld\n",N);continue;}
        while(N>0) {
            sumRandomDigit += N%10;
            N /= 10;
        } if(sumRandomDigit<10) {
            printf("%d\n",sumRandomDigit);continue;s=0;
        } while(sumRandomDigit>0) {
            total += sumRandomDigit%10;
            sumRandomDigit /=10;
        } if(total<10) {
            printf("%d\n",total);continue;s=0;
        } while(total>0) {
            sum += total%10;
            total /= 10;
        } if(s != 0) printf("%d\n",sum);
    }

    return 0;
}


///11332	Summing Digits
