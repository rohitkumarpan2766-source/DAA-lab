#include <stdio.h>

struct Item {
    int weight, profit;
    float ratio;
};

void sort(struct Item arr[], int n) {
    for(int i = 0; i < n-1; i++) {
        for(int j = 0; j < n-i-1; j++) {
            if(arr[j].ratio < arr[j+1].ratio) {
                struct Item temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int main() {
    int n = 7;
    int capacity = 15;

    struct Item arr[7] = {
        {2,10,0}, {5,25,0}, {7,35,0},
        {3,15,0}, {1,8,0}, {4,20,0}, {6,30,0}
    };

    for(int i = 0; i < n; i++) {
        arr[i].ratio = (float)arr[i].profit / arr[i].weight;
    }

    sort(arr, n);

    float totalProfit = 0;

    printf("Selected Items:\n");

    for(int i = 0; i < n; i++) {
        if(capacity >= arr[i].weight) {
            capacity -= arr[i].weight;
            totalProfit += arr[i].profit;
            printf("Take full item (W=%d, P=%d)\n", arr[i].weight, arr[i].profit);
        }
        else {
            float fraction = (float)capacity / arr[i].weight;
            totalProfit += arr[i].profit * fraction;
            printf("Take %.2f fraction of item (W=%d, P=%d)\n",
                   fraction, arr[i].weight, arr[i].profit);
            break;
        }
    }

    printf("Maximum Profit = %.2f\n", totalProfit);

    return 0;
}