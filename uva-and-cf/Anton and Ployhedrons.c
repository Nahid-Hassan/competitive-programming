#include<stdio.h>
#include<string.h>

int main()
{
    int testCase,total = 0;
    char polyhedrons[15];

    scanf("%d",&testCase);

    while(testCase--)
    {
        scanf("%s",polyhedrons);

        if(polyhedrons[0] == 'T') total += 4;
        else if(polyhedrons[0] == 'C') total += 6;
        else if(polyhedrons[0] == 'O') total += 8;
        else if(polyhedrons[0] == 'D') total += 12;
        else total += 20;
    }
    printf("%d\n",total);

    return 0;
}
