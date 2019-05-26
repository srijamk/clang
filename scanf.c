#include <stdio.h>

void main() {
    int sib, children;

    printf("How many siblings do you have? ");
    scanf("%d", &sib);
    
    printf("How many children do you have? ");
    scanf("%d", &children);

    printf("You have %d siblings and %d children.\n", sib, children);

    fflush(stdin);
    getchar();
}