#include <stdio.h>

#define MAX_LEN     100

void strncpy(char *s, char *t, int n) {
    int i = 0;
    while (i < n && *t) {
        *s++ = *t++;
        i++;
    }
    *s = '\0';

}

void strncat(char *s, char *t, int n) {
    strncpy(s + strlen(s), t, n);
}

int strncmp(char *s, char *t, int n) {
    while (n-- && *s++ && *t++) {
        if (*s < *t)
            return -1;
        else if (*s > *t)
            return 1;
    }
    return 0;
}

int main() {
    char s[MAX_LEN], t[MAX_LEN];
    char *sptr = s;
    char *tptr = t;
    int n;

    //scanf("%s %d", t, &n);
    //getchar();
    //strncpy(sptr, tptr, n);
    //printf("%s\n", s);

    //scanf("%s %s %d", s, t, &n);
    //getchar();
    //strncat(s, t, n);
    //printf("%s\n", s);

    scanf("%s %s %d", s, t, &n);
    printf("%d\n", strncmp(sptr, tptr, n));
}