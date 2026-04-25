#include <stdio.h>

int main() {
    int n, i, j, k;
    int count = 0;

    printf("Enter value of n: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            for(k = 0; k < n; k++) {
                count++;   
            }
        }
    }

    for(i = 0; i < n; i++) {
        for(j = 1; j < n; j = j * 2) {
            count++;  
        }
    }

    for(i = 0; i < 20; i++) {
        count++;
    }

    printf("Total operations = %d\n", count);

    return 0;
}