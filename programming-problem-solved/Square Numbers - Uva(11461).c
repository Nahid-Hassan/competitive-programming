#include<stdio.h>
#include<math.h>

int main() {
    int a, b;

    while(scanf("%d%d",&a,&b) && (a||b)) {
        if(a == b) {
            double c = sqrt(a);
            int r = c;
            if(r * r == a) {
                printf("1\n");
            }
            else {
                printf("0\n");
            }
        }
        else if(a == 1 && a <= b) {
            int s = sqrt(b);
            printf("%d\n",s);
        }

        else {
            int aa = sqrt(a);
            int bb = sqrt(b);
            if(aa * aa == a && bb * bb == b) {
                printf("%d\n",bb - aa + 1);
            }
            else if(aa * aa != a && bb * bb == b) {
                printf("%d\n",bb - aa);
            }
            else if(aa * aa == a && bb * bb != b) {
                printf("%d\n",bb - aa  + 1);
            }
            else {
                printf("%d\n",bb - aa);
            }
        }
    }


    return 0;
}
