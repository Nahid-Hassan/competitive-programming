#include<stdio.h>

//create a max array which can hold big number
#define MAX 500
int result[MAX];

//digit count in result array
int resultSize;

void multiply(int x) {
    //In multiply method multipy this "x" number to result[] and update the result in reverse order
    int carry = 0;
    int i;
    for(i=0;i<resultSize;i++) {
        int prod = result [i] * x + carry;
        result[i] = prod%10; //to store  reverse order
        carry = prod / 10;
    }
    while(carry) {
        result[resultSize] = carry % 10;
        carry = carry/10;
        resultSize++;
    }
}

void factorial(int n) {
    //intialize result[0] = 1 and number of digit = 1
    result[0] = 1;
    resultSize = 1;
    int x;
    //now multiplying digit one by one
    for(x=2;x<=n;x++) {
        multiply(x);
    }

    //print the result array in reverse order to answer
    int  i;

    for(i=resultSize-1;i>=0;i++) {
        printf("%d",result[i]);
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    factorial(n);
}
