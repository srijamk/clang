#include <stdio.h>

int strrindex(char s[], char t) {
    int i = -1;
    for (int j = 0; s[j] != '\0'; j++) {
        i = (s[j] == t) ? j : i;
    }
    return i;
}

int main() {
    char s[100];
    char t;

    scanf("%s", s);
    getchar();
    scanf("%c", &t);
    printf("rightmost index of %c in %s is %d\n", t, s, strrindex(s, t));    

}