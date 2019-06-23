#include <stdio.h>

char* escape(char s[], char t[]) {
    int i, j, c = 0;

    while (s[i] != '\0') {
        c = s[i];
        switch (c) {
            case '\t':
                t[j++] = '\\';
                t[j++] = 't';
                break;
            case '\n':
                t[j++] = '\\';
                t[j++] = 'n';
                break;
            default:
                t[j++] = s[i];
                break;
        }
        i++;
    }
    t[j] = '\0';
    return t;
}

int main() {
    char s[100], t[100];
    scanf("%s", s);
    printf("%s\n", escape(s, t));
}