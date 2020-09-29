/*
Some operators checks about the relationship between two values and these operators are called relational
operators. Given two numerical values your job is just to find out the relationship between them
that is (i) First one is greater than the second (ii) First one is less than the second or (iii) First and
second one is equal.

First line of the input file is an integer t (t < 15) which denotes how many sets of inputs are there.
Each of the next t lines contain two integers a and b (|a|, |b| < 1000000001).
Output
For each line of input produce one line of output. This line contains any one of the relational operators
‘>’, ‘<’ or ‘=’, which indicates the relation that is appropriate for the given two numbers.
Sample Input
3
10 20
20 10
10 10
Sample Output
<
>
=
*/


#include<stdio.h>

int main()
{
    int i,n, num1, num2;

    scanf("%d",&n);

    for(i =0 ; i <n ; i++ ) {
        scanf("%d%d",&num1,&num2);

        if(num1 > num2 ) {
            printf(">\n");
        }
        else if(num1 < num2) {
            printf("<\n");
        }
        else if(num1 == num2 ){
            printf("=\n");
        }
    }

    return 0;
}
