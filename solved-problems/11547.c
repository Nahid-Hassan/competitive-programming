#include<stdio.h>
#include<math.h>

int main()
{
    int testCase;

    scanf("%d",&testCase);

    while(testCase--)
    {
        long int N;

        scanf("%ld",&N);

        N *= 567;
        N /= 9;
        N += 7492;
        N *= 235;
        N /= 47;
        N -= 498;
        N /= 10;
        N %= 10;

        printf("%ld\n",abs(N));

    }

    return 0;
}
