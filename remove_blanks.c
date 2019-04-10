#include <stdio.h>

#define NONBLANK '0'

int get_line(char line[], int lim); // returns last actual char

main() {
    int c, lastc;

    lastc = NONBLANK;

    while ((c = getchar()) != EOF) {
        if (c != ' ') {
            putchar(c);
        } else if (lastc != ' ') {
            putchar(c);
        }
        lastc = c;
    }
}
