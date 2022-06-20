#include <bits/stdc++.h>
using namespace std;

/* using one pointer */
int linear_search(int arr[], int n, int target) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            return i;
        }
    }

    return -1;
}

/* using two pointers */
int linear_search_2(int arr[], int n, int target) {
    int left = 0;
    int right = n - 1;
    int pos = -1;

    while (left <= right) {
        if (arr[left] == target) {
            pos = left;
        }

        if (arr[right] == target) {
            pos = right;
        }

        left++;
        right--;
    }

    return pos;
}

int main() {
    int arr[10] = {56,89,12,0,123,-129,23,324,76,34};
    int arr_size = sizeof arr / sizeof arr[0];
    int target = 34;

    int ret = linear_search(arr, arr_size, target);
    ret == -1 ? printf("Element is not present in the array.\n") : printf("Element is present at index: %d\n", ret);

    ret = linear_search_2(arr, arr_size, target);
    ret == -1 ? printf("Element is not present in the array.\n") : printf("Element is present at index: %d\n", ret);


    return 0;
}