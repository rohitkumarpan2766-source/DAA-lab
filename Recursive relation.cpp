#include <stdio.h>

int binarySearch(int arr[], int left, int right, int key) {
    if (left > right)
        return -1;

    int mid = (left + right) / 2;

    if (arr[mid] == key)
        return mid;

    else if (key < arr[mid])
        return binarySearch(arr, left, mid - 1, key); 

    else
        return binarySearch(arr, mid + 1, right, key);  
}

int main() {
    int arr[] = {2, 5, 8, 12, 16, 23, 38};
    int n = 7;
    int key = 16;

    int result = binarySearch(arr, 0, n - 1, key);

    if (result != -1)
        printf("Element found at index %d\n", result);
    else
        printf("Element not found\n");

    return 0;
}