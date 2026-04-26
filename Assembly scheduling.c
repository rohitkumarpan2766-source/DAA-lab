#include <stdio.h>
int min(int a, int b) {
    return (a < b) ? a : b;
}
int main() {
    int a1[] = {3,10,12,6,7,11,12};
    int a2[] = {5,11,8,9,7,8,1};
    int t1[] = {2,3,1,3,0,0}; 
    int t2[] = {2,1,2,2,0,0};
    int n = 7;
    int f1[7], f2[7];
    f1[0] = a1[0];
    f2[0] = a2[0];
    for(int j = 1; j < n; j++) {
        f1[j] = min(f1[j-1] + a1[j],
                    f2[j-1] + t2[j-1] + a1[j]);
        f2[j] = min(f2[j-1] + a2[j],
                    f1[j-1] + t1[j-1] + a2[j]);
    }
    int result = min(f1[n-1], f2[n-1]);
    printf("Station\tf1\tf2\n");
    for(int i = 0; i < n; i++) {
        printf("%d\t%d\t%d\n", i+1, f1[i], f2[i]);
    }
    printf("\nMinimum time = %d\n", result);
    return 0;
}
