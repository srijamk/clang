#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

#define NMAX    110
#define WMAX    100010
#define MAX     UINT_MAX

long long dp[NMAX][WMAX];

long long min(long long x, long long y) {
    return (x < y) ? x : y;
}
     
int main() {

    long long i, j, n, w;
    scanf("%lld %lld", &n, &w);
    long long weights[n], values[n];
    
    for (i = 0; i < n; i++) {
        scanf("%lld %lld", &weights[i], &values[i]);
     
    }
     
    for (i = 0; i < NMAX; i++) {
        for (j = 0; j < WMAX; j++) {
            dp[i][j] = MAX;
        }
    }
    
    dp[0][0] = 0;
    for (i = 0; i < n; i++) {
        for (j = 0; j < WMAX; j++) {
            if (j >= values[i]) dp[i + 1][j] = min(dp[i][j], dp[i][j - values[i]] + weights[i]);
            else dp[i + 1][j] = dp[i][j];
        }
    }
     
    for (int i = WMAX - 1; i >= 0; i--) {

        if (dp[n][i] <= w) {
            printf("%d\n", i);

            return 0;
        }
    }

    return 0;
}