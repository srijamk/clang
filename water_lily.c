#include <stdio.h>

int main() {
    float h, l;
    scanf("%f %f", &h, &l);

    printf("%f\n", (l * l - h * h) / (2 * h));
}