#include <stdio.h>

int main() {
    int n, d;
    scanf("%d %d", &n, &d);
    d *= 2;
    d++;

    printf("%d\n", (n % d == 0) ? (n / d) : (n / d + 1));
}