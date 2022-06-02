#include <stdio.h>

// #pragma pack(1) /* pack(1) is used to align the structure */
#pragma pack(0) /* pack(0) is used to unalign the structure */

/* if you want to save cpu-cycle than use padding */
/* if you want ot save memory than use packing */

struct abc {
    char a; // 1              
    char b; // 1             // total 6
    int c;  // 4 
} var;

struct abc1 {
    char a; // 1              
    int c;  // 4 
    char b; // 1             // total 6
} var1;

struct abc2
{
    int a;
    char b;
    char c;
} var2;


int main() {
    /**
     * @brief padding
     * 
     * printf will print 8. But total size of struct is 6. Then 
     * why it will print 8?
     * 
     * Because of padding. 1 + 1 + 2 + 4 = 8. Extra 2 bytes are added because
     * without padding to access integer variable we need two cycles.
     * 
     */

    printf("%lu\n", sizeof var);      // 8
    printf("%lu\n", sizeof var1);     // 12
    printf("%lu\n", sizeof var2);     // 8
}