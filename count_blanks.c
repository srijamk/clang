#include <stdio.h>

int main() {
    int c, b, t, n;
    b = t = n = 0;

    while ((c = getchar()) != EOF) {
        switch (c) {
            case ' ':
                b++;
            case '\t':
                t++;
            case '\n':
                n++;
        }
    }
    

    printf("%d blanks, %d tabs, and %d newlines\n", b, t, n);
}