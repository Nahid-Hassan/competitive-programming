#include <stdio.h>

typedef struct abc {
    int x;
    int y;
    int z;
} abc;

int main() {
    abc a = {10, 20, 30}, b;
    abc *pa = &a;

    /* -> used for pointer */
    printf("x = %d, y = %d, z = %d\n", pa->x, pa->y, pa->z);
    // both are same
    printf("x = %d, y = %d, z = %d\n", (*pa).x, (*pa).y, (*pa).z);

    b = *pa;
    printf("x = %d, y = %d, z = %d\n", b.x, b.y, b.z);
}