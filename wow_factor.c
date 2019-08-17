#include <stdio.h>
#include <string.h>

#define MAX     1111111

int main() {
    int dp[MAX] = {0};

    char str[MAX];
    scanf("%s", str);

    int beforeLastOVVCount, curVVCount, curOIndex, curCount, flag;
    beforeLastOVVCount = curVVCount = curCount = flag = 0;
    curOIndex = -1;

    for (int i = 0; i < strlen(str); i++) {
        printf("%c %d\n", str[i], curCount);
        if (i == 0) {
            continue;
        }
        if (curOIndex == -1 && (str[i] == 'o')) {
            flag = 0;
            curOIndex = i;
            beforeLastOVVCount += curVVCount;
            curCount += beforeLastOVVCount;
            curVVCount = 0;
        } else if (str[i] == 'o') {
            flag = 0;
            curOIndex = i;
            beforeLastOVVCount += curVVCount;
            curCount += beforeLastOVVCount;
            curVVCount = 0;
        } else if ((str[i] == 'v') && (str[i - 1] == 'v')) {
            dp[i] = dp[i - 1] + curCount;
            curVVCount++;
            continue;
        }
        dp[i] = dp[i - 1];
    }

    for (int i = 0; i < strlen(str); i++) {
        printf("%c ", str[i]);
    }
    putchar('\n');
    for (int i = 0; i < strlen(str); i++) {
        printf("%d ", dp[i]);
    }
    putchar('\n');
}