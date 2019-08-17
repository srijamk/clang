#include <stdio.h>

#define ALPHA   26

int main() {
    int c, count;
    count = 0;
    int alpha[ALPHA] = {0};

    getchar();
    while ((c = getchar()) != '}') {
        if (c == ',');
        else alpha[(int) c - 97]++;
    }

    for (int i = 0; i < ALPHA; i++) if (alpha[i] > 0) count++;
    
    printf("%d\n", count);
}