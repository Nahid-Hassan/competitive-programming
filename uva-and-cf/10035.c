#include<stdio.h>

int main()
{
    long int a,b;
    int carry = 0,sum = 0,count = 0;


    while(2==scanf("%ld%ld",&a,&b)) {
        if (a == 0 && b == 0) return 0;
        carry = 0;sum = 0;count = 0;
        if(a>=b) {
            while(a>0) {
                sum = 0;

                sum += a % 10;
                sum += b % 10;
                sum += carry;

                a = a / 10;
                b = b / 10;

                if(sum>9) {
                    carry = 1;
                    count++;
                }
                else {
                    carry = 0;
                }
            }
        }else {
            while(b>0) {
                sum = 0;

                sum += a % 10;
                sum += b % 10;
                sum += carry;

                a = a / 10;
                b = b / 10;

                if(sum>9) {
                    carry = 1;
                    count++;
                }
                else {
                    carry = 0;
                }
            }
        }
        if(count == 0) printf("No carry operation.\n");
        else if(count==1) printf("1 carry operation.\n");
        else printf("%d carry operations.\n",count);
    }

    return 0;
}


