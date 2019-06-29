#include <stdio.h>
#include <stdlib.h>

int compare (const void * a, const void * b) {
   return ( *(int*)a - *(int*)b );
}

int main() {
    int n;
    scanf("%d", &n);
    int nums[n];
    
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    qsort(nums, n, sizeof(int), compare);
    
    if (n % 2 == 0) {
        if (nums[n / 2] == nums[n / 2 - 1])
            printf("0\n");
        else
            printf("%d\n", nums[n / 2] - nums[n / 2 - 1]);
    } else {
        printf("0\n");
    }
}