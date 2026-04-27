#include <stdio.h>

void countingSort(int arr[], int n) {
    int i, max = arr[0];

    for(i = 1; i < n; i++) {
        if(arr[i] > max)
            max = arr[i];
    }

    int count[max + 1];
    int output[n];

    for(i = 0; i <= max; i++) {
        count[i] = 0;
    }

    for(i = 0; i < n; i++) {
        count[arr[i]]++;
    }

    printf("\nStep 1: Frequency Count Array:\n");
    for(i = 0; i <= max; i++) {
        printf("%d ", count[i]);
    }

    for(i = 1; i <= max; i++) {
        count[i] += count[i - 1];
    }

    printf("\nStep 2: Cumulative Count Array:\n");
    for(i = 0; i <= max; i++) {
        printf("%d ", count[i]);
    }

    for(i = n - 1; i >= 0; i--) {
        output[count[arr[i]] - 1] = arr[i];
        count[arr[i]]--;
    }

    printf("\nStep 3: Output Array (Sorted):\n");
    for(i = 0; i < n; i++) {
        printf("%d ", output[i]);
    }

    for(i = 0; i < n; i++) {
        arr[i] = output[i];
    }
}

int main() {
    int arr[] = {4, 2, 2, 8, 3, 3, 1};
    int n = sizeof(arr)/sizeof(arr[0]);

    printf("Original Array:\n");
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    countingSort(arr, n);

    printf("\nFinal Sorted Array:\n");
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
