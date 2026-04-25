#include <stdio.h>
#include <math.h>

int main() {
    int n = 8;   
    int count = 0;


    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j = j * 2) {
            count++;
            printf("n log n step\n");
        }
    }

    for (int k = 1; k <= 5; k++) {
        for (int i = 1; i <= n; i++) {
            count++;
            printf("5n step\n");
        }
    }

    for (int i = 1; i <= 10; i++) {
        count++;
        printf("constant step\n");
    }

    printf("\nTotal steps = %d\n", count);

    return 0;
}