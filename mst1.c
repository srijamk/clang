#include <stdio.h>
#define MAX     20000000

int main() {
    int q, n;

    scanf("%d", &q);
    int dp[MAX];
    dp[1] = 0;
    for (int i = 2; i <= MAX; i++) {
        dp[i] = dp[i - 1];
        if (i % 2 == 0) dp[i] = (dp[i] < dp[i / 2]) ? (dp[i]) : (dp[i / 2]);
        if (i % 3 == 0) dp[i] = (dp[i] < dp[i / 3]) ? (dp[i]) : (dp[i / 3]);
        dp[i]++;
    }

    for (int c = 1; c < q + 1; c++) {
        scanf("%d", &n);
        printf("Case %d: %d\n", c, dp[n]);
    }
}