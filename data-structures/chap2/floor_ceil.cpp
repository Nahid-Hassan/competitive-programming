#include <bits/stdc++.h>
using namespace std;

int find_largest(int arr[], int n) {
    int largest = INT_MIN;
    for (int i = 0; i < n; i++) {
        if (arr[i] > largest) {
            largest = arr[i];
        }
    }
    return largest;
}

bool linear_search(int arr[], int target) {
    for (int i = 0; i < sizeof(arr); i++) {
        if (arr[i] == target) {
            return true;
        }
    }
    return false;
}

bool is_prime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;    
}

int main(int argc, char const *argv[])
{
    float pi = 3.14;
    /* floor and ceil */
    cout << "floor(pi): " << floor(pi) << endl; // 3
    cout << "ceil(pi): " << ceil(pi) << endl; // 4

    /* modulo */
    cout << "15 % 12 = " << 15 % 12 << endl; // 3
    cout << "(1 - 5) % 12 = " << 1 - 5 % 12 << endl; // -4

    /* casting */
    cout << "int(pi) = " << int(pi) << endl; // 3
    
    /* absolute value */
    cout << "abs(pi) = " << abs(pi) << endl; // 3.14
    cout << "abs(-10) = " << abs(-10) << endl; // 10
    
    /* summation */
    /** 
     * for seq 1 + 2 + 3 + ....  + n = n * (n + 1) / 2
     */
    cout << "sum(1, 2, 3, 4, 5) = " << 5 * ( 5 + 1 ) / 2 << endl; // 15
    
    /* factorial & permutation */
    cout << "factorial(5) = " << 5 * 4 * 3 * 2 * 1 << endl; // 120
    cout << "factorial(0) = " << 1 << endl; // 1

    /* exponential and logarithms */
    /**
     * @brief exponents for rational number
     * a ^ (m / n) = n sqrt(a) ^ m
     * suppose 125 ^ 2/3 = 5 ^ 2 = 25
     *
     * @brief logarithms
     * log a ^ b = b * log a
     */
    
    cout << "log(8) = " << log2(8) << endl; // 1.6094379124341003
    cout << "log(100) = " << log10(100) << endl; // 2

    /* find largest */
    int arr[] = {1, 2, 3, 4, 5};
    cout << "find_largest(arr, 5) = " << find_largest(arr, 5) << endl; // 5

    int target = 3;
    cout << "linear_search(arr, target) = " << linear_search(arr, target) << endl; // true
    cout << "linear_search(arr, 10) = " << linear_search(arr, 10) << endl; // false
    
    /* prime number */
    cout << "is_prime(2) = " << is_prime(2) << endl;
    cout << "is_prime(4) = " << is_prime(4) << endl;

    return 0;
}
