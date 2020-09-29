#include<stdio.h>

int main()
{
    int testCase,farmerNumber,a,b,c; /*a = farmyard in square meters
                                       b = number of animals , c = environment-friendliness*/
    long int total = 0;

    scanf("%d",&testCase);

    while(testCase--) {
        scanf("%d",&farmerNumber);
        total = 0;
        while(farmerNumber--) {
            scanf("%d%d%d",&a,&b,&c);
            total += a*c;   /*farmyard in square meters * environment-friendliness*/
        }
        printf("%ld\n",total);
    }

    return 0;
}
