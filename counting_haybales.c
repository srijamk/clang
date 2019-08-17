#include <stdio.h>

#define MAX     100010

int main() {
    int n, q, x, y, z, i;
    scanf("%d %d", &n, &q);

    int bales[MAX] = {0};
    for (i = 0; i < n; i++) {
        scanf("%d", &x);
        for (; x < MAX; x++) {
            bales[x]++;
        }
    }    

    for (i = 0; i < q; i++) {
        scanf("%d %d", &y, &z);
        printf("%d\n", (bales[z] - bales[y]) ? (bales[z] - bales[y] + 1) : 0);
    }

}