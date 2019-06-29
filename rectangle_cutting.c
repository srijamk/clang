#include <stdio.h>

int main() {
    double w, h, x, y;
    scanf("%lf %lf %lf %lf", &w, &h, &x, &y);

    printf("%f ", w * h / 2);
    printf("%d\n", (x == w / 2 && y == h / 2) ? 1 : 0);
}