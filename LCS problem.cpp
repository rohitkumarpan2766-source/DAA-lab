#include <stdio.h>
#include <string.h>

int max(int a, int b) {
    return (a > b) ? a : b;
}

int main() {
    char s1[] = "BCDAACD";
    char s2[] = "ACDBAC";

    int m = strlen(s1);
    int n = strlen(s2);

    int dp[m+1][n+1];

    for(int i = 0; i <= m; i++) {
        for(int j = 0; j <= n; j++) {

            if(i == 0 || j == 0)
                dp[i][j] = 0;

            else if(s1[i-1] == s2[j-1])
                dp[i][j] = dp[i-1][j-1] + 1;

            else
                dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
        }
    }

    printf("Length of LCS = %d\n", dp[m][n]);

    int i = m, j = n;
    char lcs[20];
    int index = dp[m][n];
    lcs[index] = '\0';

    while(i > 0 && j > 0) {
        if(s1[i-1] == s2[j-1]) {
            lcs[index-1] = s1[i-1];
            i--; j--; index--;
        }
        else if(dp[i-1][j] > dp[i][j-1])
            i--;
        else
            j--;
    }

    printf("LCS String = %s\n", lcs);

    return 0;
}