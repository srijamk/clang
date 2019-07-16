#include <stdio.h>

int main() {
    int n, cur;
    char* index;
    char letter1, letter2;
    scanf("%d", &n);
    char result[n];
    cur = 0;
    index = result;

    while (cur < n) {
        scanf("%c", &letter1);
        cur++;
        if (cur == n) {
            if (index == result || *index != letter1) {
                *index = letter1;
                break;
            }
        }

        scanf("%c", &letter2);
        if (index == result && letter1 != letter2) {

            *index++ = letter1;
            *index++ = letter2;
            printf("%c\n", *index);
        } else if (index == result && letter1 == letter2) {
            *index++ = letter1;
        } else if (*(index - 1) != letter1 && letter1 != letter2) {
            putchar(*index);
            *index++ = letter1;
            *index++ = letter2;
        } else if (*(index - 1) != letter1 && letter1 == letter2) {
            putchar(*index);
            *index++ = letter1;
        } else if (*(index - 1) == letter1 && letter1 != letter2) {
            if ((index - result) % 2 == 0) {
                *index++ = letter1;
            }
            *index++ = letter2;
        } else {
            putchar(*(index));
        }

        cur++;
    }
    *index++ = '\0';
    printf("%s\n", result);
}