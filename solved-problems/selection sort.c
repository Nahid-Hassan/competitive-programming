#include<stdio.h>
#include<stdlib.h>

void selection_sort(int a[],int n);

int main()
{
    int i, j, temp, n, index_min;
    printf("####Welcome to Selection Sort!!####\n");
    printf("How many numbers you want to sort: ");
    scanf("%d",&n);

    int element[n];
    for(i=0;i<n;i++) scanf("%d",&element[i]);

    selection_sort(element[n],n);

    for(i = 0; i < n-1; i++) {
        index_min = i;
        for(j = i+1; j < n; j++) {
            if(element[j] < element[index_min]) {
                index_min = j;
            }
        }
        if(index_min != i) {
            temp = element[i];
            element[i] = element[index_min];
            element[index_min] = temp;
        }
    }

    for(i = 0; i < n; i++) printf("%d  ",element[i]);

    printf("\nI hope you gess it\n");
}
