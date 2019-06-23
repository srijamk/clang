#include <stdio.h>

int main() {

    int c, last_was_blank;
    last_was_blank = 0;

    while ((c = getchar()) != EOF) {
        if (c == ' ') {
            if (!last_was_blank) {
                last_was_blank = 1;
                putchar(c);
            }
        } else {
            putchar(c);
        }
    }

}