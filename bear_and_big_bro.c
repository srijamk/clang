#include <stdio.h>

#define THREE   3
#define TWO     2

int main() {
    int l, b, c;
    c = 0;
    scanf("%d %d", &l, &b);
    while (l <= b) {
        l *= THREE;
        b *= TWO;
        c++;
    }

    printf("%d\n", c);

}