/*
    Given a range [a, b], you are to find the summation of all the odd integers in this range. For example,
    the summation of all the odd integers in the range [3, 9] is 3 + 5 + 7 + 9 = 24.

    Input
    There can be at multiple test cases. The first line of input gives you the number of test cases, T
    (1 ≤ T ≤ 100). Then T test cases follow. Each test case consists of 2 integers a and b (0 ≤ a ≤ b ≤ 100)
    in two separate lines.

    Output
    For each test case you are to print one line of output – the serial number of the test case followed by
    the summation of the odd integers in the range [a, b].
    Sample Input
    2
    1
    5
    3
    5

    Sample Output
    Case 1: 9
    Case 2: 8
*/
/**
    Simulation:
    [1,5] = 1,2,3,4,5       = >1 + 3 + 5 = 9;
    [1,6] = 1,2,3,4,5,6     = >1 + 3 + 5 = 9;
    [1,7] = 1,2,3,4,4,6,7   = >1 + 3 + 5 + 7 = 16;
    [1,8] = 1,2,3,4,4,6,7,8   = >1 + 3 + 5 + 7 = 16;
    [1,7] = 1,2,3,4,4,6,7,8,9   = >1 + 3 + 5 + 7 + 9 = 25;
    [1,7] = 1,2,3,4,4,6,7,8,9,10  = >1 + 3 + 5 + 7+ 9 = 25;

    [3,9] = 3,4,5,6,7,8,9           => 3 + 5 + 7 + 9 = 24.

**/
///problem name : odd sum
#include<stdio.h>

int main()
{
    int testCase,a,b;
    int casen = 0;
    scanf("%d",&testCase);

    while(testCase--)
    {
        casen++;
        int sum = 0;
        scanf("%d%d",&a,&b);
        for(a;a<=b;a++)
        {
            if(a%2!=0) sum += a;
        }
        printf("Case %d: %d\n",casen,sum);
    }

    return 0;
}
