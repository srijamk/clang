#include <stdio.h>
#define MAX     111111

int main() {
    int n, hero, defeated;
    scanf("%d", &n);
    int monsters[MAX];
    defeated = 0;

    for (int i = 0; i < n + 1; i++) {
        scanf("%d", &monsters[i]);
    }

    for (int i = 0; i < n; i++) {
        scanf("%d", &hero);
        if (hero > monsters[i]) {
            hero -= monsters[i];
            defeated += monsters[i];
            monsters[i] = 0;
        } else if (hero == monsters[i]) {
            monsters[i] = 0;
            defeated += hero;
            continue;
        } else if (hero < monsters[i]) {
            monsters[i] -= hero;
            defeated += hero;
            continue;
        }
        if (hero > monsters[i + 1]) {
            defeated += monsters[i + 1];
            monsters[i + 1] = 0;
        } else if (hero == monsters[i + 1]) {
            monsters[i + 1] = 0;
            defeated += hero;
        } else {
            monsters[i + 1] -= hero;
            defeated += hero;
        }
    }

    printf("%d\n", defeated);
}