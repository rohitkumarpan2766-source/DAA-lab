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
                count++; 
            }
        }
    }

    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            count++;  
        }
    }

    count++; count++; count++;
    count++; count++; count++; count++;

    printf("Total operations = %d\n", count);

    return 0;
}