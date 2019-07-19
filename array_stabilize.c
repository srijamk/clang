#include <stdio.h>

int main() {
    int n, max, min, secondMax, secondMin, first;

    scanf("%d", &n);
    scanf("%d", &first);
    max = min = first;
    secondMax = secondMin = 0;

    for (int i = 0; i < n - 1; i++) {

        scanf("%d", &first);
        if (first >= max) {
            secondMax = max;
            max = first;
        } else if (first >= secondMax || secondMax == 0) secondMax = first;
        if (first <= min) {
            secondMin = min;
            min = first;
        } else if (first <= secondMin || secondMin == 0) secondMin = first;
    }

    printf("%d\n", (secondMax - min < max - secondMin) ? secondMax - min : max - secondMin);
}