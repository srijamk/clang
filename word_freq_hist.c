#include <stdio.h>

int main() {
    int     c, word_len;
    int     freqs[100] = {0};
    word_len = 0;

    while ((c = getchar()) != EOF) {
        if (c == '\n' || c == '\t' || c == ' ') {
            ++freqs[word_len];
            word_len = 0;
        } else {
            word_len++;
        }
    }
    printf("\nWord Length Histogram\n------------------------\n");

    for (int i = 0; i < 100; i++) {
        if (freqs[i] > 0) {
            printf("%d\t", i);
            for (int j = 0; j < freqs[i]; j++) {
                putchar('*');
            }
            putchar('\n');
        }
    }
    printf("-------------------------\n\n");
}