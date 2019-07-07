#include <stdio.h>

int qsort(const void *a, const void *b) {
    int num1 = *(const int *)a;
    int num2 = *(const int *)b;

    return (num > num2) ? num1 : num2;
}

int main() {
    int n;
    scanf("%d", &n);

    int nums[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    qsort(nums, n, )
}