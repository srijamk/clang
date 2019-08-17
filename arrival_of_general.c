#include <stdio.h>
#include <limits.h>

#define MAX     111

int main() {
    int n, max, maxI, min, minI;
    int arr[MAX];
    max = 0;
    min = 100;

    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        if (arr[i] <= min) {
            min = arr[i];
            minI = i;
        }
    }

    for (int i = n - 1; i >= 0; i--) {
        if (arr[i] >= max) {
            max = arr[i];
            maxI = i;
        }
    }

    printf("%d\n", (maxI < minI) ? (maxI + n - minI - 1) : (maxI + n - minI - 2));

}