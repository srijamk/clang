#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
    a = (int *) a;
    b = (int *) b;

    return a - b;
}

int main() {
    int n, cur;
    scanf("%d", &n);
    int nums = {0};


    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    qsort(nums, n, sizeof(int), compare);

    for (int i = 0; i < n; i++) {
        printf("%d\n", nums[i]);
    }

    for (int i = 0; i < n; i++) {
        if (nums[i] >= cur + 1) {
            cur++;
            printf("%d %d\n", nums[i], cur);
        }
    }

    printf("%d\n", cur);
}