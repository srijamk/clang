#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main(int argc, char *argv[]) {
    int c;

    if (strcmp(argv[0], "UPPER") == 1) {
        while ((c = getchar()) != EOF)
            putchar(toupper(c));    
    } else {
        while ((c = getchar()) != EOF)
            putchar(tolower(c));
    }
}