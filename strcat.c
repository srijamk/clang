#include <stdio.h>
#include <string.h>

#define MAX_LEN     100

char* reg_strcat(char s[], char t[]) {
    int i = strlen(s);
    for (int j = 0; j < strlen(t); j++) {
        s[i++] = t[j];
    }
    s[i] = '\0';
    return s;
}

void pointer_strcat(char *s, char *t) {
    printf("%c\n", *s);
    while (*s != '\0')
        s++;
    while ((*s++ = *t++)) {
        ;
    }
}

int main() {
    char t[MAX_LEN], s[MAX_LEN];
    char *t_ptr = t;
    char *s_ptr = s;
    scanf("%s", s);
    getchar();
    scanf("%s", t);
    getchar();

    // printf("%s\n", reg_strcat(s, t));
    pointer_strcat(s_ptr, t_ptr);
    printf("%s\n", s);
}