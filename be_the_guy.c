#include <stdio.h>

int main() {
    int n, x, y, z, i;
    scanf("%d", &n);
    scanf("%d", &x);
    int nums[n + 1];


    for (i = 0; i < x; i++) {
        scanf("%d", &z);
        nums[z] = 1;
    }
    
    scanf("%d", &y);
    for (i = 0; i < y; i++) {
        scanf("%d", &z);
        nums[z] = 1;
    }   

    for (i = 1; i < n + 1; i++) {
        printf("%d\n", nums[i]);
        if (nums[i] == 0) {
            break;
        }
    }

    printf((i <= n + 1) ? "Oh, my keyboard!\n" : "I become the guy.\n");
}