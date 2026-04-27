#include <stdio.h>

int main() {
    int n;

    printf("Enter n: ");
    scanf("%d", &n);

    if (n == 0) {
        printf("Fibonacci(0) = 0\n");
        return 0;
    }
    if (n == 1) {
        printf("Fibonacci(1) = 1\n");
        return 0;
    }

    int fib[n+1];

    fib[0] = 0;
    fib[1] = 1;

    for(int i = 2; i <= n; i++) {
        fib[i] = fib[i-1] + fib[i-2];
    }

    printf("Fibonacci(%d) = %d\n", n, fib[n]);

    return 0;
}
