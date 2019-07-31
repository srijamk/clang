#include <stdio.h>
#include <stdlib.h>

#define NMAX    111
#define WMAX    1111111111

long max(long x, long y) {
    return (x > y) ? x : y;
}

int main() {
    int i, j;
    long n, w, weight, val;
    scanf("%ld %ld", &n, &w);
    long weights[n], values[n];

    static long dp[NMAX][WMAX] = {0};

    for (int i = 0; i < n; i++) {
        scanf("%ld %ld", &weights[i], &values[i]);

    }


    getchar();

    for (i = 0; i < n; i++) {
        for (j = 0; j <= w; j++) {
            if (i == 0 && j == 0) dp[i][j] = 0;
            else if (i == 0) {
                //printf("%ld\n", values[i]);
                if (j >= weights[i]) dp[i][j] = values[i];
                //printf("%ld\n", dp[i][j]);
            } else {
                if (j < weights[i] && j == 0) dp[i][j] = dp[i - 1][j];
                else if (j < weights[i]) dp[i][j] = dp[i - 1][j];
                else if (j == weights[i]) {

                    dp[i][j] = max(dp[i - 1][j], values[i]);
                }
                else if (j > weights[i]) {
                    dp[i][j] = max(max(dp[i - 1][j - weights[i]] + values[i], dp[i - 1][j]), dp[i][j - 1]);

                }
            }
        }
    }

    printf("%ld\n", dp[i - 1][j - 1]);

}