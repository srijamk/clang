#include <stdio.h>
#define MAX     111111

long abso(long x) {
    return (x > 0) ? x : (-1 * x);
}

int min(int x, int y) {
    return (x < y) ? x : y;
}

int max(int x, int y) {
    return (x > y) ? x : y;
}

int main() {
    int n, k;
    scanf("%d %d", &n, &k);
    int dp[MAX], nums[MAX];
    dp[0] = 0;

    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    for (int i = 1; i < n; i++) {
        dp[i] = dp[max(0, i - k)] + abso(nums[i] - nums[max(0, i - k)]);
        int m = max(0, i - k);
        if (m == 0) {
            for (int a = 1; a < i; a++) dp[i] = min(dp[i], dp[a] + abso(nums[i] - nums[a])); 
        } else {
            for (int a = m; a < i; a++) dp[i] = min(dp[i], dp[a] + abso(nums[i] - nums[a]));
        }
    }
    printf("%d\n", dp[n - 1]);
}