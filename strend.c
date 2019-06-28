#include <stdio.h>
#include <string.h>

#define MAX_LEN     100

int strend(char *s, char *t) {
    s += strlen(s) - strlen(t);
    while (*s++ == *t++) {
    }
    return (*s == '\0' && ((*s + strlen(s)) == (*t + strlen(t)))) ? 1 : 0;
    
}

int main() {

    char t[MAX_LEN], s[MAX_LEN];
    char *t_ptr = t;
    char *s_ptr = s;

    scanf("%s", s);
    getchar();
    scanf("%s", t);
    getchar();

    printf("%d\n", strend(s_ptr, t_ptr));
}