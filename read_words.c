#include <stdio.h>

int main() {
    int     c;

    while ((c = getchar()) != EOF) {
        if (c == '\n' || c == '\t' || c == ' ') {
            printf("\n");
        } else {
            putchar(c);
        }
    }
}