#include <stdio.h>

int main() {
    int n, a, x, b, y;
    scanf("%d %d %d %d %d", &n, &a, &x, &b, &y);

    while (a != x && b != y && a != b) {
        a++;
        b--;
        
        if (a == n + 1) a = 1;
        if (b == 0) b = n;
    }

    if (a == b) printf("YES\n");
    else printf("NO\n");
}