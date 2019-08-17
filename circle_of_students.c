#include <stdio.h>
#define MAX     500

int main() {
    int q, n;
    scanf("%d", &q);
    for (int i = 0; i < q; i++) {
        scanf("%d", &n);
        int students[MAX] = {0};
        int x, j;
        for (j = 0; j < n; j++) {
            scanf("%d", &students[j]);
            if (students[j] == 1) x = j;
        }

        for (; j < 2 * n; j++) {
            students[j] = students[j - n];
        }


        int clockwise = 1;
        for (int a = x; a < x + n - 1; a++) {
            if (students[a] + 1 != students[a + 1]) {
                clockwise = 0;
                continue;
            }
        }

        if (clockwise) {
            printf("YES\n");
            continue;
        }

        int counter = 1;
        int k = x + n;
        for (; k > x + 1; k--) {
            if (students[k] + 1 != students[k - 1]) {
                counter = 0;
                continue;
            }
        }

        if (counter) {
            printf("YES\n");
            continue;
        }

        printf("NO\n");
        continue;

    }

}