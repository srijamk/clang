#include <stdio.h>

char* squeeze(char s1[], char s2[]) {
    int i, j, k;
    // i -> index of s1
    // j -> index of s2
    // k -> current index of resulting string

    for (i = k = 0; s1[i] != '\0'; i++) {
        for (j = 0; s2[j] != '\0' && s2[j] != s1[i]; j++)
            ;
        if (s2[j] == '\0') {
            s1[k++] = s1[i];
        }
    }
    s1[k] = '\0';   // crucial step to cut off all other chars

    return s1;
}

int main() {
    char s1[100], s2[100];
    scanf("%s", s1);
    scanf("%s", s2);
    printf("%s\n", squeeze(s1, s2));
}