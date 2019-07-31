#include <stdio.h>

int min(int x, int y) {
    return (x < y) ? x : y;
}

int abs(int x) {
    return (x > 0) ? x : (-1 * x);
}

int main() {
    int n;
    scanf("%d", &n);
    int dp[n], nums[n];
    dp[0] = 0;

    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    for (int i = 1; i < n; i++) {
        if (i == 1) dp[i] = abs(nums[1] - nums[0]);
        else dp[i] = min(dp[i - 1] + abs(nums[i] - nums[i - 1]), dp[i - 2] + abs(nums[i] - nums[i - 2])); 
    }

    printf("%d\n", dp[n - 1]);
}