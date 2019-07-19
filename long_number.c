#include <stdio.h>
#define DIGITS  9
#define IN      1
#define OUT     0

int main() {
    int n, status;
    int digits[DIGITS];
    scanf("%d", &n);
    char num[n];
    status = OUT;

    scanf("%s", num);
    for (int i = 1; i <= DIGITS; i++) {
        scanf("%d", &digits[i]);
    }

    for (int i = 0; i < n; i++) {
        int d = num[i] - '0';
        if (status == OUT) {    // not found start of seq yet
            if (digits[d] > d) {    // found start
                status = IN;
                putchar(digits[d] + '0');
            } else {
                putchar(num[i]);
            }
        } else if (status == IN) {  // has found start of seq
            if (digits[d] >= d) {    // next digit also makes number larger
                putchar(digits[d] + '0');
            } else {
                for (; i < n; i++) {
                    putchar(num[i]);
                }
                break;
            }
        }

    }

    putchar('\n');
}