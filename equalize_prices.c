#include <stdio.h>

int main() {
    int q, n, k, min, max, c, num;
    scanf("%d", &q);
    for (; q > 0; q--) {
        scanf("%d %d", &n, &k);
        scanf("%d", &min);
        max = min;
        n--;
        for (; n > 0; n--) {
            scanf("%d", &num);
            max = (max > num) ? max : num;
            min = (min < num) ? min : num;
        }

        if ((min + k) < (max - k)) printf("-1\n");
        else printf("%d\n", min + k);
    }
}