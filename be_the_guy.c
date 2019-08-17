#include <stdio.h>
#define MAX     111

int main() {
    int n, p1, p2, x, result;
    result = 1;
    int arr[MAX] = {0};

    scanf("%d", &n);
    scanf("%d", &p1);

    for (int i = 0; i < p1; i++) {
        scanf("%d", &x);
        arr[x - 1] = 1;
    }

    scanf("%d", &p2);

    for (int i = 0; i < p2; i++) {
        scanf("%d", &x);
        arr[x - 1] = 1;
    }

    for (int i = 0; i < n; i++) {
        if (arr[i] == 0) {
            result = 0;
            break;
        }
    }

    printf(result ? "I become the guy.\n" : "Oh, my keyboard!\n");
}