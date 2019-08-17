#include <stdio.h>

int main() {
    long long n;
    scanf("%lld", &n);

    printf("%d\n", (((n * (n + 1)) / 2) % 2) ? 1 : 0);
}