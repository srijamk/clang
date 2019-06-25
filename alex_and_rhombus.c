#include <stdio.h>

int main() {
    int n, ans = 1;
    scanf("%d", &n);

    for (int i = 1; i < n; i++) {
        ans += (4 * i);
    }

    printf("%d\n", ans);
}