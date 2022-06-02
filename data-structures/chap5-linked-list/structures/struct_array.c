#include <stdio.h>

typedef struct abc {
    int x;
    int y;
    int z;
} abc;

int main() {
    abc arr[3];

    for (int i = 0; i <= 2; i++) {
        arr[i].x = 10 * i;
        arr[i].y = 20 * i;
        arr[i].z = 30 * i;
    }

    printf("\n");

    for (int i = 0; i <= 2; i++) {
        printf("%d\n", arr[i].x);
        printf("%d\n", arr[i].y);
        printf("%d\n", arr[i].z);
    }

    return 0;
}