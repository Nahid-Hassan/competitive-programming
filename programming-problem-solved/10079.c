#include<stdio.h>

int main()
{
    long long n;

    while(1==scanf("%lld",&n))
    {
        if(n>=0) printf("%lld\n",(n*(n+1)/2)+1);
        else if(n<0) break;
    }

    return 0;
}
/*
    When someone calls Ivan lazy, he claims that it is his intelligence that helps him to be so. If his
    intelligence allows him to do something at less physical effort, why should he exert more? He also
    claims that he always uses his brain and tries to do some work at less effort; this is not his laziness,
    rather this is his intellectual smartness.
    Once Ivan was asked to cut a pizza into seven pieces to distribute it
    among his friends. (Size of the pieces may not be the same. In fact, his
    piece will be larger than the others.) He thought a bit, and came to the
    conclusion that he can cut it into seven pieces by only three straight cuts
    through the pizza with a pizza knife. Accordingly, he cut the pizza in the
    following way (guess which one is Ivan’s piece):
    One of his friends, who never believed in Ivan’s smartness, was startled
    at this intelligence. He thought, if Ivan can do it, why can’t my computer?
    So he tried to do a similar (but not exactly as Ivan’s, for Ivan will criticize
    him for stealing his idea) job with his computer. He wrote a program that
    took the number of straight cuts one makes through the pizza, and output a number representing the
    maximum number of pizza pieces it will produce.
    Your job here is to write a similar program. It is ensured that Ivan’s friend won’t criticize you for
    doing the same job he did.

    Input
    The input file will contain a single integer N (0 ≤ N ≤ 210000000) in each line representing the number
    of straight line cuts one makes through the pizza. A negative number terminates the input.

    Output
    Output the maximum number of pizza pieces the given number of cuts can produce. Each line should
    contain only one output integer without any leading or trailing space.

    Sample Input
    5
    10
    -100

    Sample Output
    16
    56
*/
/**
    Simulation:
    n = 0 --> 0
    n = 1 --> (n*(n + 1)/2)+1 = (1*(1+1)/2)+1 = 2
    n = 2 --> (n*(n + 1)/2)+1 = (2*(2+1)/2)+1 = 4
    n = 3 --> (n*(n + 1)/2)+1 = (3*(3+1)/2)+1 = 7
    n = 4 --> (n*(n + 1)/2)+1 = (4*(4+1)/2)+1 = 11
    n = 5 --> (n*(n + 1)/2)+1 = (5*(5+1)/2)+1 = 16
    n = 6 --> (n*(n + 1)/2)+1 = (6*(6+1)/2)+1 = 22
    n = 7 --> (n*(n + 1)/2)+1 = (7*(7+1)/2)+1 = 29
    n = 8 --> (n*(n + 1)/2)+1 = (8*(8+1)/2)+1 = 37
    n = 9 --> (n*(n + 1)/2)+1 = (9*(9+1)/2)+1 = 46
    n = 10--> (n*(n + 1)/2)+1 = (10*(10+1)/2)+1 = 56

    ----------------------------------------------------------------------------
    ----------------------------------------------------------------------------

    n = N --> (n*(n + 1)/2)+1 = (N*(N+1)/2)+1 = __ [N = {R --> (Real Number)}];

**/
