#include <stdio.h>
#include <stdlib.h>

#define MAX     111

int max(int x, int y) {
    return (x > y) ? x : y;
}

int main() {
    int n, m, longest;
    longest = 0;

    int **dp = (int **) malloc(MAX * sizeof(int *)); 
    for (int i = 0; i < MAX; i++) 
         dp[i] = (int *)malloc(MAX * sizeof(int)); 
        
    scanf("%d %d", &n, &m);
    
    for (int i = 0; i < m; i++) {
        int x, y;
        scanf("%d %d", &x, &y);
        dp[x][y] = 1;    
    }

    for (int i = 1; i < n + 1; i++) {
        for (int j = 1; j < n + 1; j++) {
            if (i == j) dp[i][j] = 0;
            else {
                int l = 0;
                for (int k = 1; k < j; k++) {
                    if (dp[i][k] != -1) l = max(dp[i][j], dp[i][k] + dp[k][j]);
                }
                dp[i][j] = (l == 0) ? -1 : l;
            }
            longest = max(longest, dp[i][j]);
            printf("%d ", dp[i][j]);
        }
        putchar('\n');
    }

    printf("%d\n", longest);
    free(dp);
}