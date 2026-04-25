#include <stdio.h>

int main() {
    int start[]  = {1, 3, 0, 5, 8, 5, 6};
    int finish[] = {2, 4, 6, 7, 9, 9, 10};
    int n = 7;

    printf("Selected Activities:\n");

    int i = 0;
    printf("A%d ", i+1);   // select first activity

    for(int j = 1; j < n; j++) {
        if(start[j] >= finish[i]) {
            printf("A%d ", j+1);
            i = j;
        }
    }

    return 0;
}