#include <stdio.h>



int main() {
    int n, x, digits;
    digits = 0;
    scanf("%d", &n);
    x = n;

    while (x > 0) {
        digits++;
        x /= 10;
    }
    if (digits == 1) {
        printf("%d\n", n);
    } else if (digits == 2) {
        printf("%d\n", 9);
    } else if (digits == 3) {
        printf("%d\n", 9 + n - 100 + 1);
    } else if (digits == 4) {
        printf("%d\n", 9 + (999 - 100 + 1));
    } else if (digits == 5) {
        printf("%d\n", 9 + (999 - 100 + 1) + (n - 10000 + 1));
    } else if (digits == 6) {
        printf("%d\n", 9 + (999 - 100 + 1) + (99999 - 10000 + 1));
    }
}