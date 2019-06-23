#include <stdio.h>

int any(char s1[], char s2[]) {
    int i, j;

    for (i = 0; s1[i] != '\0'; i++) {
        for (j = 0; s2[j] != '\0' && s2[j] != s1[i]; j++) {
            ;
        }
        if (s2[j] != '\0') {
            return i;
        }
    }
    return -1;
}

int main() {
    char s1[100], s2[100];
    scanf("%s", s1);
    scanf("%s", s2);
    printf("%d\n", any(s1, s2));    
}