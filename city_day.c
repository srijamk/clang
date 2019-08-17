#include <stdio.h>

#define MAX     111111

int max(int x, int y) {
    return (x > y) ? x : y;
}

int min(int x, int y) {
    return (x < y) ? x : y;
}

int main() {
    int n, x, y;
    int rain[MAX] = {0};
    scanf("%d %d %d", &n, &x, &y);

    for (int i = 0; i < n; i++) {
        scanf("%d", &rain[i]);
    }

    int j = 0;
    while (j < n) {

        int flag = 0;
        for (int i = max(0, j - x); i < min(j + y + 1, n); i++) {
            if ((i != j) && (rain[i] <= rain[j])) {
                j++;
                flag = 1;
                break;
            }
        }

        if (flag) continue;
        else printf("%d\n", j + 1);
        break;
    }
}