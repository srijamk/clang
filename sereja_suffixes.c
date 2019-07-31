#include <stdio.h>
#define MAX     100002

int main() {
    int n, m, max, num;
    max = 0;
    scanf("%d %d", &n, &m);
    int nums[n];
    int result[n];
    int check[MAX];

    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    result[n - 1] = 1;
    check[nums[n - 1]] = 1;
    for (int i = n - 2; i >= 0; i--) {
        if (check[nums[i]] == 1) result[i] = result[i + 1];
        else {
            check[nums[i]] = 1;
            result[i] = result[i + 1] + 1;
        }
    }

    for (int i = 0; i < m; i++) {
        scanf("%d", &num);
        printf("%d\n", result[num - 1]);
    }
}