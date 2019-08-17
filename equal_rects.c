#include <stdio.h>
#define MAX     1111

int compare(const void *a, const void *b) {
    return ( *(int*) a - *(int*) b );
}

int main() {
    int q, n;
    scanf("%d", &q);

    for (int i = 0; i < q; i++) {
        scanf("%d", &n);
        n = n * 4;
        int nums[MAX] = {0};

        for (int j = 0; j < n; j++) {
            scanf("%d", &nums[j]);
        }

        qsort(nums, n, sizeof(int), compare);

        int area = nums[0] * nums[n - 1];
        int j;

        for (j = 0; j < n / 2; j++) {
            if ((nums[j] * nums[n - j - 1]) != area) {
                printf("NO\n");
                break;
            }
        }

        if (j >= n / 2) {
            printf("YES\n");
        }
    }
}