/*
    Peter received money from his parents this week and wants to spend it all buying books. But he does
    not read a book so fast, because he likes to enjoy every single word while he is reading. In this way, it
    takes him a week to finish a book.
    As Peter receives money every two weeks, he decided to buy two books, then he can read them until
    receive more money. As he wishes to spend all the money, he should choose two books whose prices
    summed up are equal to the money that he has. It is a little bit difficult to find these books, so Peter
    asks your help to find them.

    Input
    Each test case starts with 2 ≤ N ≤ 10000, the number of available books. Next line will have N
    integers, representing the price of each book, a book costs less than 1000001. Then there is another
    line with an integer M , representing how much money Peter has. There is a blank line after each test
    case. The input is terminated by end of file (EOF).

    Output
    For each test case you must print the message: ‘Peter should buy books whose prices are i and
    j.’, where i and j are the prices of the books whose sum is equal do M and i ≤ j. You can consider that
    is always possible to find a solution, if there are multiple solutions print the solution that minimizes
    the difference between the prices i and j. After each test case you must print a blank line.

    Sample Input
    2
    40 40
    80
    5
    10 2 6 8 4
    10
    Sample Output
    Peter should buy books whose prices are 40 and 40.

    Peter should buy books whose prices are 4 and 6.
*/
/**
Simulation:
5
10 2 6 8 4
10 + 2 = 12, 10 + 6 = 16, 10 + 8 = 18, 10 + 4 = 14

2 + 6 = 8, 2 + 8 = 10, 2 + 4 = 6    abs(2-8) = 6;
						if(6>2) print--> 2
6 + 8 = 14, 6 + 4 = 10       	    abs(6-4) = 2;
**/

#include<stdio.h>
#include<math.h>

int main()
{
    int testCase,N;

    while(scanf("%d",&testCase)==1)
    {
        int input_price[testCase];

        for(i=0;i<testCase;i++)
        {
            scanf("%d",&)
        }
    }
}
