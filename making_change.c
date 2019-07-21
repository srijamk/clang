#include <stdio.h>

int main() {
    int amt, n, i, j;
    scanf("%d %d", &amt, &n);
    int coins[n];
    int dp[n][amt + 1];
    for (int i = 0; i < n; i++) {
        scanf("%d", &coins[i]);
    }

    for (i = 0; i < n; i++) {
        for (j = 0; j < amt + 1; j++) {
            if (j == 0) dp[i][j] = 0;
            else if (coins[i] > j) dp[i][j] = (i == 0) ? 0 : dp[i - 1][j];
            else if (coins[i] == j) dp[i][j] = (i == 0) ? 1 : dp[i - 1][j] + 1;
            else dp[i][j] = (i == 0) ? dp[i][j - coins[i]] : dp[i - 1][j] + dp[i][j - coins[i]];
        }
    }

    printf("%d\n", dp[i-1][j-1]);
}