#include <stdio.h>

int main() {
    int x, a;
    scanf("%d %d", &x, &a);

    printf("%d\n", (x < a) ? 0 : 10);
}