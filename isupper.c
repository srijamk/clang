#include <stdio.h>

#define UPPER_Z     90
#define UPPER_A     65
#define LOWER_Z     122     

int is_upper(char c) {
    return ((int) c) <= UPPER_Z;
}

int main() {
    char c;
    while ((c = getchar()) > LOWER_Z || c < UPPER_A) {
        printf("Please enter a letter.\n");
        c = getchar();
    }
    printf("%d\n", is_upper(c));
}