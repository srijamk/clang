#include <stdio.h>

int solve(int amt, int coins[], int n) {
    int dp[n + 1];
    dp[0] = 0;
    for (int i = 1; i <= n; i++) {
        int cur = 0;
        while (cur < n && coins[cur] <= i) {
            if (coins[cur] == i) dp[i] += 1;
            dp[i] += dp[i - coins[cur]];
            cur++;
        }
    }
    return dp[n];
}

int main() {
    int amt, n, i, j;
    scanf("%d %d", &amt, &n);
    int coins[n];
    int dp[n][amt + 1];
    for (int i = 0; i < n; i++) {
        scanf("%d", &coins[i]);
    }

    printf("%d\n", solve(amt, coins, n));

}