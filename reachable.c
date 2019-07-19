#include <stdio.h>

int main() {
    int n, count;
    count = 1;
    scanf("%d", &n);

    if (n < 10) count = 9;
    else {
        while (n != 1) {
            n++;
            while (n % 10 == 0) n /= 10;
            if (n / 10 == 0) {
                count += 9;
                break;
            }
            count++;
        }

    }
    printf("%d\n", count);
}