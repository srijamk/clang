#include <stdio.h>

int main() {
    int n, h, num_bend, num;
    num_bend = 0;
    scanf("%d %d", &n, &h);

    for (int i = 0; i < n; i++) {
        scanf("%d", &num);
        if (num > h)
            num_bend++;
    }

    printf("%d\n", num_bend * 2 + (n - num_bend));

}