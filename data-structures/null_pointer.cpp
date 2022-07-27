#include <iostream>
using namespace std;

/**
 * @brief Null Pointer: A Null pointer is a special kind of pointer that 
 * doesn't contain any memory location. It represents an invalid memory
 * location. 
 * 
 * * When a NULL value is assigned to a pointer, then the pointer is considered
 * * as NULL pointer. 
 * 
 * If malloc() and calloc() cannot allocate memory location it returns NULL pointer. 
 */

/**
 * @brief NULL == 0 (Zero) ??!!
 * 
 * The value of NULL is 0(zero). We can either use NULL or 0, but this 0 is written
 * in context of pointers and is not equivalent to the integer 0.
 * 
 * @return int 
 */

int main() {
    // It is good practice to assign NULL to a pointer if the pointer is not 
    // associated any memory address.
    int *ptr = NULL;

    ptr = (int *) malloc(2 * sizeof(int));
    if (ptr == NULL) {
        printf("Memory could not be allocated.\n");
    } else {
        printf("Memory allocated successfully.\n");
    }

    int a = 10, b = 20;
    int *ptr1 = NULL; // assign to null
    int *ptr2 = 0;    // value assign to 0, so both are not same in context.

    cout << &ptr1 << endl;
    // cout << *ptr1 << endl;           // SHOW: ERROR!!!
    cout << &ptr2 << endl;
    // cout << *ptr1 << endl;           // SHOW: ERROR!!!

    return 0;
}

/**
 * @brief Some Good Practices ........
 * 
 * 1. It is a good practice to initialize a pointer as NULL.
 * 2. It is a good practice to perform NULL check before dereferencing
 *    any pointer to avoid surprises. 
 */