#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int nums[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    int products_before_index[n];
    int products_after_index[n];
    products_before_index[0] = 1;
    products_after_index[n - 1] = 1;

    for (int i = 1; i < n; i++) {
        products_before_index[i] = products_before_index[i - 1] * nums[i - 1];
        products_after_index[n - i] = (i == 1) ? 1 : products_after_index[n - i + 1] * nums[n - i + 1];
    }

    products_after_index[0] = products_after_index[1] * nums[1];

    for (int i = 0; i < n; i++) {
        printf("%d ", products_before_index[i] * products_after_index[i]);
    }
    putchar('\n');
}