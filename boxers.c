#include <stdio.h>

#define MAX     155555

int compare(const void *a, const void *b) {
    return ( *(int*) a - *(int*) b );
}

int main() {
    int weights[MAX] = {0};
    int dp[MAX] = {0};
    int nums[MAX] = {0};
    int n, x, i, max;

    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }
    
    qsort(nums, n, sizeof(int), compare);
    
    for (int i = 0; i < n; i++) {
        x = nums[i];
        if (i == 0) {
            dp[i] = 1;
            weights[x] = 1;
        } else {
            if (weights[x - 1] == 0 && x != 1) {
                dp[i] = dp[i - 1] + 1;
                weights[x - 1] = 1;
            } else if (weights[x] == 0) {
                dp[i] = dp[i - 1] + 1;
                weights[x] = 1;
            } else if (weights[x + 1] == 0) {
                dp[i] = dp[i - 1] + 1;
                weights[x + 1] = 1;
            } else {
                dp[i] = dp[i - 1];
            }
        }
    }

    printf("%d\n", dp[i - 1]);
}