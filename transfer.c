#include <stdio.h>

int max(int x, int y) {
    return (x > y) ? x : y;
}

int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    printf("%d\n", max(0, c - (a - b)));
}