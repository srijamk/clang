#include <stdio.h>

int main() {
    int a, b, c, max_value;
    max_value = 0;

    scanf("%d %d %d", &a, &b, &c);

    max_value = a + b + c;
    max_value = (max_value > (a * b + c)) ? max_value : (a * b + c);
    max_value = (max_value > (a * b * c)) ? max_value : (a * b * c);
    max_value = (max_value > ((a + b) * c)) ? max_value : ((a + b) * c);
    max_value = (max_value > (a + b * c)) ? max_value : (a + b * c);
    max_value = (max_value > (a * (b + c))) ? max_value : (a * (b + c));

    printf("%d\n", max_value);
}