#include <stdio.h>

int main() {
    long a, b;
    scanf("%ld %ld", &a, &b);
    if ((a + b) % 2 == 0) printf("%ld\n", (a + b) / 2);
    else printf("IMPOSSIBLE\n");
}