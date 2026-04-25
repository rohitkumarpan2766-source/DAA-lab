#include <stdio.h>

int main() {
    int n, i, j;
    int count = 0;

    printf("Enter value of n: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++) {
        for(j = 1; j <= i; j++) {
            printf("* ");   
            count++;       
        }
        printf("\n");
    }

    printf("Total operations = %d\n", count);

    return 0;
}