#include <stdio.h>

int main() {
    int n, num_groups, prev, new;
    num_groups = 1;
    scanf("%d", &n);
    scanf("%d", &prev);

    for (int i = 0; i < n - 1; i++) {
        scanf("%d", &new);
        if (new != prev)
            num_groups++;
        prev = new;
    }

    printf("%d\n", num_groups);
}