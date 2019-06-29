#include <stdio.h>
#include <string.h>

int main() {

    int n, k, count;
    count = 0;
    scanf("%d %d", &n, &k);
    int nums[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    int grid[n][n];
    memset(grid, 0, sizeof(grid[0][0]) * n * n);

    for (int sub_len = 0; sub_len < n; sub_len++) {
        for (int seq_index = 0; seq_index < n; seq_index++) {
            if (sub_len == 0) {
                grid[sub_len][seq_index] = nums[seq_index];
            } else {
                if (sub_len - seq_index > 0) {
                    grid[sub_len][seq_index] = 0;
                } else {
                    grid[sub_len][seq_index] = grid[sub_len - 1][seq_index - 1] + nums[seq_index];
                }
            }
            count += (grid[sub_len][seq_index] >= k) ? 1 : 0;
        }
    }

    printf("%d\n", count);
}