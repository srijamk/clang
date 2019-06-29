#include <stdio.h>

int main() {
    int n, x, d, c, count;
    scanf("%d %d", &n, &x);
    d = count = 0;

    for (int i = 0; i < n; i++) {
        scanf("%d", &c);
        if (d + c <= x) {
            d += c;
            count++;
        } else 
            break;
    }

    printf("%d\n", count + 1);
}