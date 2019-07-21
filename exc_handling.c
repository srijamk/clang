#include <stdio.h>

int main() {
    int n, max, sec, d, maxIndex;
    scanf("%d", &n);
    max = sec = 0;
    for (int i = 0; i < n; i++) {
        scanf("%d", &d);
        if (d >= max) {
            sec = max;
            max = d;
            maxIndex = i;
        } else if (d >= sec) {
            sec = d;
        }
    }
    for (int i = 0; i < n; i++) {
        if (i == maxIndex) printf("%d\n", sec);
        else printf("%d\n", max);
    }
}