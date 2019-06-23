#include <stdio.h>
#define MAX_SIZE    200


int main() {
    int c;
    int char_freq[MAX_SIZE] = {0};

    while ((c = getchar()) != EOF) {
        char_freq[(int) c] += 1;
    }    

    printf("\n Character Frequency Histogram\n------------------------\n");


    for (int i = 0; i < MAX_SIZE; i++) {
        if (char_freq[i] > 0) {
            if ((char) i == '\n') {
                printf("\n");
            }
            if ((char) i == '\t') {
                printf("\t");
            } else {
                printf("\"%c\"\t", i);
                for (int j = 0; j < char_freq[i]; j++) {
                    printf("*");
                }
                printf("\n");
            }
        } 
    }

    printf("-------------------------\n\n");    
}