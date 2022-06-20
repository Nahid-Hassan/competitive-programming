#include <bits/stdc++.h>
using namespace std;

/* iterative */
int binary_search(int arr[], int n, int target) {
    int low = 0;
    int high = n - 1;
    int mid;

    while (low <= high) {
        mid = low + ((high - low) / 2);
        if (arr[mid] == target) {
            return mid;
        } else if (target < arr[mid]) {
            high = mid - 1;
        } else {
            low = mid + 1;
        }

        cout << mid << ' ' << low << " " << high << endl;
    }

    return -1;
}

/* recursive */
int binary_search_recursive(int arr[], int left, int right, int target) {
    if (right >= left) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == target) {
            return mid;
        }

        if (arr[mid] > target) {
           return binary_search_recursive(arr, left, mid-1, target);
        } 

        return binary_search_recursive(arr, mid + 1, right, target);
    }

    return -1;
}

int main() {
    int arr[10] = {56,89,12,0,123,-129,23,324,76,34};
    int arr_size = sizeof arr / sizeof arr[0];
    int target = 34;
    sort(arr, arr+arr_size);

    int ret = binary_search(arr, arr_size, target);
    ret == -1 ? printf("Element is not present in the array.\n") : printf("Element is present at index: %d\n", ret);
    ret = binary_search_recursive(arr, 0, arr_size - 1, target);
    ret == -1 ? printf("Element is not present in the array.\n") : printf("Element is present at index: %d\n", ret);
}