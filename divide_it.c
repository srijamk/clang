#include <stdio.h>

int main() {
    int n, query, count;

    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &query);
        count = 0;

        while (query % 5 == 0) {
            query *= (4 / 5);
            count++;
        }
        while (query % 3 == 0) {
            query *= (2 / 3);
            count++;
        }

        while (query % 2 == 0) {
            query /= 2;
            count++;
        }
        printf("ans: %d\n", count);
    }
}