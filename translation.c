#include <stdio.h>
#include <string.h>

int isReverse(char s1[], char s2[]) {

    if (strlen(s1) != strlen(s2))
        return 0;

    for (int i = 0; i < strlen(s1); i++) {
        if (s1[i] != s2[strlen(s2) - i - 1]) {
            return 0;
        }
    }
    return 1;
}

int main() {
    char s1[101], s2[101];

    scanf("%s", s1);
    scanf("%s", s2);
    printf((isReverse(s1, s2) ? "YES\n" : "NO\n"));
}