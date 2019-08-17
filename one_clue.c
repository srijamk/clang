#include <stdio.h>

int main() {
    int k, x;
    scanf("%d %d", &k, &x);
    int i = x - k + 1;
    while (i <= k + x - 1) {
        printf("%d ", i);
        i++;
    }
    putchar('\n');
}