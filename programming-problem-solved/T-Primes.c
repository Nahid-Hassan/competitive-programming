#include<stdio.h>
#include<math.h>

int main()
{
    long int n, check_sqrt, check = 0;
    scanf("%ld",&n);
    long int m[n], i, j;

    for(i = 0; i < n; i++) {
        scanf("%ld",&m[i]);
        check_sqrt = sqrt(m[i]);

        if(m[i]<4) printf("NO\n");
        else if(m[i]%2==0 && m[i]==4) printf("YES\n");
        else if(m[i]%2!=0) {
            for(j = check_sqrt; j<= check_sqrt + 1; j++) {
                if(j*j==m[i]) check = 10;
            }
            if(check == 10) {
                printf("YES\n");
                check = 19;
            } else {
                printf("NO\n");
            }
        }
        else if(check == 19) printf("NO\n");
        else printf("NO\n");
    }

    return 0;
}
