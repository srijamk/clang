#include <stdio.h>
#define MAX_STEP    5

int main() {
    int n, count, cur;
    count = 0;
    cur = MAX_STEP;
    
    scanf("%d", &n);

    while (n > 0) {
        if (n >= cur) {
            n -= cur;
            count++;
        } else {
            cur--;
        }
    }

    printf("%d\n", count);
}