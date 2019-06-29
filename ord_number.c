#include <stdio.h>

int main() {
    int n, count = 0;
    scanf("%d", &n);
    int nums[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    for (int i = 1; i < n - 1; i++) {
        if ((nums[i] > nums[i - 1] && nums[i] < nums[i + 1]) || (nums[i] < nums[i - 1] && nums[i] > nums[i + 1])) {
            count++;
        }
    }

    printf("%d\n", count);
}