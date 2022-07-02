#include<stdio.h>

int y(int n);

int main()
{
    int x;
    x = y(50);

    printf("Final Output: %d\n",x);

    return 0;
}

int y(int n) {

    if(n==0) {
        printf("In Terminating Condition: %d\n",n);

        return n;
    }
    else {
        printf("In Recursive Calling: %d\n",n);

        return n+y(n-5);
    }

    printf("CSE %d Times\n",n);
}
