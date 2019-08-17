#include <stdio.h>

#define MAX     111

int main() {
    char s1[MAX];
    char s2[MAX];    
    int c, j;
    j = 0;

    while ((c = getchar()) != '\n') {
        s1[j++] = c;
    }
    scanf("%s", s2);

    for (int i = 0; i < j; i++) {
        if (s1[i] == s2[i]) putchar('0');
        else putchar('1');
    }

    putchar('\n');
}