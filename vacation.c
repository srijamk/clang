#include <stdio.h>
#include <stdlib.h>

#define MAX     111111
#define DAYS    4

int max(int x, int y) {
    return (x > y) ? x : y;
}

int main() {
    int n, i;
    scanf("%d", &n);

    int** v = (int **) malloc(sizeof(int *) * MAX);
    int** dp = (int **) malloc(sizeof(int *) * MAX);
    
    for (int i = 0; i < MAX; i++) {
        v[i] = (int *) malloc(sizeof(int) * DAYS);
        dp[i] = (int *) malloc(sizeof(int) * DAYS);
    }

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < DAYS; j++) {
            scanf("%d", &v[i][j]);
        }
    }

    printf("%d %d\n", n, DAYS);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < DAYS; i++) {
            if (i == 0 && j == 0) {
                dp[i][j] = v[0][0];
                printf("%d\n", dp[i][j]);
            }
            else if (i == 0) {
                dp[i][j] = max(v[i][j], dp[i][j - 1]);
                printf("%d\n", dp[i][j]);

            }
            else {
                if (j == 0) {
                    dp[i][j] = max(v[i][j], dp[i][1]);
                    dp[i][j] = max(dp[i][j], dp[i][2]);
                } else if (j == 1) {
                    dp[i][j] = max(v[i][j], dp[i][0]);
                    dp[i][j] = max(dp[i][j], dp[i][2]);
                } else {
                    dp[i][j] = max(v[i][j], dp[i][0]);
                    dp[i][j] = max(dp[i][j], dp[i][1]);
                }
            }
        }
    }

}