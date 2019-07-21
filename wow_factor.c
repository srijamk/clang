#include <stdio.h>
#include <string.h>

#define MAX     1000000

int main() {
    int vvLoc[MAX];
    char s[MAX];
    int len, j, count, lastCount, ans, level, left, hasFoundVv;
    j = count = ans = lastCount = hasFoundVv = 0;
    level = 1;
    scanf("%s", s);
    len = strlen(s);

    for (int i = 0; i < len - 1; i++) {
        if (s[i] == 'o' && hasFoundVv) count++;
        else if (s[i] == 'v' && s[i + 1] == 'v') {
            hasFoundVv = 1;
            vvLoc[j++] = count - lastCount;

            lastCount = count;
        }
    }

    left = j - 1;

    for (int i = 1; i <= j; i++) {
        ans += vvLoc[i] * level * left;
        printf("%d %d %d %d\n", vvLoc[i], level, left, vvLoc[i] * level * left);
        level++;
        left--;
    }

    printf("%d\n", ans);
}