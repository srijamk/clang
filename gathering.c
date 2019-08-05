#include <stdio.h>
#include <stdlib.h>

#define MAX     111111

int main() {
    char moves[MAX];
    int *children;
    children = (int *) calloc(sizeof(int) * MAX);
    int c, i;
    i = 0;
    while ((c = getchar()) != '\n') {
        moves[i++] = c;
    }

    printf("yo");
}