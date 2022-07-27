#include <iostream>
using namespace std;

/** void pointer is a pointer which has not associated data type.
 *  It can point to any of the data type and can be type casted to
 *  any type.
 */

int main() {
    int n = 65;
    void *ptr = &n;

    cout << ptr << endl;
    cout << &n << endl;

    /* first convert to associated data type or (type casted first) then dereferenced */
    cout << *(int *) ptr << endl;
    /* convert to char pointer then dereferenced it and it shows as result capital - A */
    cout << *(char *) ptr << endl;
    // cout << *ptr << endl;               // ERROR!!
}

/**
 * @Note: We cannot dereferenced a void pointer directly 
 *
 * Example:
 * cout << *ptr << endl;            // is not accepted 
 */

/**
 * @brief Why void pointer??
 * 
 * malloc() and calloc() a built in function that returns void pointer.
 * without knowing the data type it allocates memory for any data type.
 */