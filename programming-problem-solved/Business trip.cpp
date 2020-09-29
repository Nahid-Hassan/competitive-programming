#include <bits/stdc++.h>

using namespace std;

int main()
{
    int k,a[12],i,sum = 0;

    scanf("%d",&k);
    for(i = 0; i < 12; i++) {
        scanf("%d",&a[i]);
        sum += a[i];
    }
    if(k==0) {
        printf("0\n");
        return 0;
    }
    if(sum<k) printf("-1\n");
    else {
        sort(a,a+i);
        reverse(a,a+i);
        sum = 0;
        for(i = 0; i < 12; i++)  {
            sum += a[i];
            if(sum>=k) {
                printf("%d\n",i+1);
                break;
            }
        }
    }

    return 0;
}

/*
First, it is clear that if the sum of all numbers ai is less than k, then Peter in any case will
not be able to grow a flower to the desired height, and you should output <<-1>>.

Secondly, it is easy to see that if we want to choose a one month of two,
in which we watered the flower, it is better to choose one where the number of ai is more.
Thus, the solution is very simple: let's take months in descending order of numbers ai and in these months water flowers.
As soon as the sum of the accumulated ai becomes greater than or equal to k — should stop the process, the answer is found.
*/
