#include <stdio.h>

int main() {
    char s[4];
    int isBad = 0;
    scanf("%s", s);
    getchar();

    for (int i = 0; i < 3; i++) {
        if (s[i] == s[i + 1]) {
            isBad = 1;
        } 
    }    

    printf("%s", (isBad) ? "Bad\n" : "Good\n");
}