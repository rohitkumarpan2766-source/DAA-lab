#include <stdio.h>

int max(int a, int b) {
    return (a > b) ? a : b;
}

int main() {
    int profit[] = {2, 4, 7, 10};
    int weight[] = {1, 3, 5, 7};
    int n = 4;
    int W = 8;

    int K[n+1][W+1];

    for(int i = 0; i <= n; i++) {
        for(int w = 0; w <= W; w++) {

            if(i == 0 || w == 0)
                K[i][w] = 0;

            else if(weight[i-1] <= w)
                K[i][w] = max(K[i-1][w],
                              profit[i-1] + K[i-1][w - weight[i-1]]);

            else
                K[i][w] = K[i-1][w];
        }
    }
    printf("DP Table:\n");
    for(int i = 0; i <= n; i++) {
        for(int w = 0; w <= W; w++) {
            printf("%d ", K[i][w]);
        }
        printf("\n");
    }

    printf("Maximum Profit = %d\n", K[n][W]);

    return 0;
}