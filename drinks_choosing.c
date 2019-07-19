#include <stdio.h>

#define MAX     1001

int main() {
    int n, k, j, max, full, tot;
    int drinks[MAX] = {0};
    scanf("%d %d", &n, &k);
    full = tot = 0;
    max = (n % 2 == 0) ? (n / 2) : (n / 2 + 1);

    for (int i = 0; i < n; i++) {
        scanf("%d", &j);
        drinks[j]++;
    }

    for (int i = 1; i <= k; i++) {
        if (drinks[i] > 1) {
            full += (drinks[i] / 2);
            drinks[i] = drinks[i] % 2;
        }
    }

    if (full == max) printf("%d\n", full * 2);
    else {
        int cur = 1;
        tot = full * 2;
        while (full < max) {
            if (drinks[cur] == 1) {
                full++;
                tot++;
            }
            cur++;
        }
        printf("%d\n", tot);
    }
}