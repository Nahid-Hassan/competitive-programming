#include <stdio.h>

typedef struct abc {
    int x;
    int y;
    int z;
} abc;

int main() {
    abc a;
    /* access the members of structure */
    a.x = 10;
    a.y = 20;
    a.z = 30;

    printf("%d\n", a.x);
    printf("%d\n", a.y);
    printf("%d\n", a.z);

    abc b = {10, 20, 30};

    printf("%d\n", b.x);
    printf("%d\n", b.y);
    printf("%d\n", b.z);

    /* designed to initialize the structure */
    abc c = {.y = 20, .z = 30, .x = 10};
    printf("%d\n", c.x);
    printf("%d\n", c.y);
    printf("%d\n", c.z);

    return 0;
}
