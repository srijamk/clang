#include <stdio.h>

int max(int x, int y) {
    return (x > y) ? x : y;
}

int min(int x, int y) {
    return (x < y) ? x : y; 
}

int main() {
    int x;
    scanf("%d", &x);
    for (int i = 0; i < x; i++) {
        int n, s, t;
        scanf("%d %d %d", &n, &s, &t);
        int only_stickers, only_toys, both;
        if ((s + t) == n) {
            printf("%d\n", max(s, t) + 1);
        } else if (s + t == 2 * n) {
            printf("1\n");
        } else {
            both = s + t - n;
            s -= both;
            t -= both;
            printf("%d\n", max(s, t) + 1);
        }
    }
}