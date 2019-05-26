#include <stdio.h>

void main() {
    int sib, children;

    printf("How many siblings do you have? ");
    scanf("%d", &sib);
    getchar();
    
    printf("How many children do you have? ");
    scanf("%d", &children);
    getchar();

    printf("You have %d siblings and %d children.", sib, children);
    getchar();
}