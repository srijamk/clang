#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX     3333
char s[MAX], t[MAX];
int dp[MAX][MAX];

int max(int x, int y) {
    return (x > y) ? x : y;
}

int main() {
    scanf("%s", s);
    scanf("%s", t);
    int i, j;
    char *sub = malloc(sizeof(char) * MAX);
    sub += MAX;



    for (i = 0; i < strlen(s); i++) {
        for (j = 0; j < strlen(t); j++) {
            //printf("%d\n", (s[i] == t[j]));
            if (i == 0 && j == 0) dp[i][j] = (s[i] == t[j]);
            else if (i == 0) dp[i][j] = (s[i] == t[j]) ? 1 : dp[i][j - 1]; 
            else if (j == 0) dp[i][j] = (s[i] == t[j]) ? 1 : dp[i - 1][j];
            else dp[i][j] = (s[i] == t[j]) ? dp[i - 1][j - 1] + 1 : max(dp[i - 1][j - 1], max(dp[i - 1][j], dp[i][j - 1]));
            printf("%d ", dp[i][j]);
        }
        putchar('\n');

    }

    i--;
    j--;

    while (i >= 0 && j >= 0) {
        if (s[i] == t[j]) {
            *sub-- = s[i];
            i--;
            j--;
        } 
        else if (i == 0 && j == 0) break;
        else if (i == 0) j--;
        else if (j == 0) i--;
        else if (dp[i - 1][j] > dp[i][j - 1]) i--;
        else j--;
    }

    printf("%s\n", sub + 1);

    //printf("%d\n", dp[i - 1][j - 1]);

}