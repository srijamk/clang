#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int nums[n];
    int result = 1;
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    for (int i = 0; i < n - 1; i++) {
        if (i == 0) {
            if (nums[i] - nums[i + 1] > 1) {
                result = 0;
                break;
            };
        } else {
            if (nums[i] - nums[i + 1] > 1) {
                result = 0;
                break;
            }
            else if (nums[i] - nums[i + 1] == 1) {
                nums[i]--;
                if (nums[i] < nums[i - 1]) {
                    result = 0;
                    break;
                }
            }
            else if (nums[i] <= nums[i + 1]) {
                if (nums[i] > nums[i - 1]) {
                    nums[i]--;
                }
            }
        }
    }

    printf((result) ? "Yes\n" : "No\n");
}
