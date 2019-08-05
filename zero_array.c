#include <stdio.h>

int main() {
    int n, sum, x;
    sum = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &x);
        sum += x;
    }

    printf((sum % 2 == 0) ? "YES\n" : "NO\n");
}