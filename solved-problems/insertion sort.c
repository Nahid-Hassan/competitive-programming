#include<stdio.h>

int main()
{
    int i, j, temp, n;
    printf("\n###welcome to insertion sort###\n");
    printf("How many numbers you want to sort: ");
    scanf("%d",&n);

    int element[n];

    for(i = 0; i < n; i++) scanf("%d",&element[i]);

    for(i = 0; i < n; i++) {
        //element[i] -কে temp -এ এসাইন করি।
        temp = element[i];

        //এখন temp - এর জন্য উপযুক্ত স্থান খুঁজে বের করি।
        j = i - 1;

        while(j>=0 && element[i] > temp) {
            element[j+1] = element[j];
            j = j - 1;
        }
        //element[j+1] হচ্ছে temp এর জন্য উপযুক্ত স্থান ।
        //এবং সেটি আমরা ইতিমধ্যে আমরা খালি করে রেখেছি।
        element[j+1] = temp;

    }

    for(i = 0; i < n; i++) printf("%d  ",element[i]);

    return 0;
}
