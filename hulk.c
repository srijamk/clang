#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n - 1; i++) {
        if (i % 2 == 0) printf("I hate that ");
        else printf("I love that ");
    }

    printf((n % 2 == 1) ? "I hate it\n" : "I love it\n");
}