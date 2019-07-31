#include <stdio.h>
#define MAX     21

int main() {
    long dp[MAX][MAX];
    
    for (int i = 0; i < MAX; i++) {
        for (int j = 0; j < MAX; j++) {
            if (i == 0 && j == 0) dp[i][j] = 1;
            else if (i == 0 || j == 0) dp[i][j] = 1;
            else dp[i][j] = dp[i - 1][j] + dp[i][j - 1];
        }
    }

    printf("%ld\n", dp[MAX-1][MAX-1]);
}