#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
    return ( *(int *)a - *(int *)b);
}

int main() {
    int n, cur;
    cur = 0;
    scanf("%d", &n);
    int nums[n];


    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    qsort(nums, n, sizeof(int), compare);

    for (int i = 0; i < n; i++) {
        if (nums[i] >= cur + 1) {
            cur++;
        }
    }

    printf("%d\n", cur);
}