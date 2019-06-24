#include <stdio.h>

int main() {
    int n, max_count, count;
    max_count = 0;
    count = 1;
    int nums[100000];

    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }
    for (int i = 1; i < n; i++) {
        if (nums[i] >= nums[i - 1]) {
            count++;
        } else {
            max_count = (max_count > count) ? max_count : count;
            count = 1;
        }
    }
    max_count = (max_count > count) ? max_count : count;
    printf("%d\n", max_count);
}