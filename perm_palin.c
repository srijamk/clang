#include <stdio.h>

#define ALPHALEN    26
#define CONV        97

int main() {
    int alpha[ALPHALEN] = {0};
    int c, num;
    num = 0;
    while ((c = getchar()) != '\n') {
        alpha[(int)c - CONV]++;
    }

    for (int i = 0; i < ALPHALEN; i++)  num += (alpha[i] == 1) ? 1 : 0;

    printf("%s\n", (num <= 1) ? "True" : "False");
}

