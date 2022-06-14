#include<stdio.h>

int main()
{
    int i = 0, sum = 0, testCase;
    scanf("%d",&testCase);
    int temp = testCase;
    int anothertemp = testCase;
    int input[testCase];

    /*take input*/
    while(testCase--) {
        scanf("%d",&input[i]);
        sum += input[i];
        i++;
    }

    /*Insertion sort*/
    int Temp, j;

    for(i = 0; i < temp; i++) {
        temp = input[i];
        j = i - 1;
        while(j>=0 && input[i] > temp) {
            input[j+1] = input[j];
            j = j - 1;
        }
        input[j+1] = temp;
    }

    for(i=0;i<anothertemp;i++) printf("%d ",input[i]);
    printf("\n");
    /*final step*/
    int total = 0;
    for(i = 0; i < temp; i++) {
        total += input[i];
        if(total>=sum) break;
    }

    printf("%d\n",i+1);

    return 0;
}
