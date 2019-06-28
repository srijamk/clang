#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n, l, min, result, sign;
    scanf("%d %d", &n, &l);
    min = abs(l);
    sign = 1;
    result = 0;

    for (int i = 1; i < n + 1; i++) {

        if (abs(l + i - 1) < min) {
            min = abs(l + i - 1);
            if (l + i - 1 < 0) {
                sign = -1;
            } else {
                sign = 1;
            }
        }
        result += (l + i - 1);
    }

    result -= min * sign;
    printf("%d\n", result);
}