#include <stdio.h>

int main() {
    int n, cur, num, count;
    scanf("%d", &n);
    cur = 1;
    count = 0;
    for (; cur <= n; cur++) {
        scanf("%d", &num);
        if (num != cur) count++;
    }
    
    if (count == 2 || count == 0) printf("YES\n");
    else printf("NO\n");
}