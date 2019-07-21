#include <stdio.h>

int main() {
    int n, num, lo, hi, mid;
    scanf("%d", &n);
    scanf("%d", &num);
    int nums[n];
    
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    lo = 0;
    hi = n - 1;
    while (lo < hi) {
        mid = (lo + hi) / 2;
        if (nums[lo] == num) {
            mid = lo;
            break;
        } else if (nums[hi] == num) {
            mid = hi;
            break;
        }
        if (nums[mid] == num) break;
        else if (nums[mid] < num) lo = mid;
        else if (nums[mid] > num) hi = mid;
    }

    if (lo >= hi) printf("%d\n", -1);
    else printf("%d\n", mid);
}