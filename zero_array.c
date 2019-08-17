#include <stdio.h>

#define MAX     111111

int main() {
    int n, result;
    long long sum = 0;
    result = 1;

    long long nums[MAX] = {0};

    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%lld", &nums[i]);
        sum += nums[i];
    }


    for (int i = 0; i < n; i++) {
        if (sum - nums[i] < nums[i]) {
            result = 0;
            break;
        }
    }

    if (result) {
        printf((sum % 2 == 0) ? "YES\n" : "NO\n");
    } else {
        printf("NO\n");
    }
}