#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define BUFFER_SIZE     100
#define MAX_SIZE        100

char buffer[BUFFER_SIZE];
int bufp = 0;

int getch(void) {
    return (bufp > 0) ? buffer[--bufp] : getchar();
}

void ungetch(int c) {
    if (bufp >= BUFFER_SIZE)
        printf("ungetch: too many characters\n");
    else
        buffer[bufp++] = c;
}

char getword(char *word, int lim) {
    int c, getch(void);
    void ungetch(int);
    char *w = word;

    while (isspace(c = getch()))
        ;
    
    if (c != EOF)
        *w++ = c;
    if (c != '_' && !isalpha(c)) {
        *w = '\0';
        return c;
    }

    for ( ; --lim > 0; w++) {
        if ((*w = getch()) != '_' && !isalnum(*w)) {
            ungetch(*w);
            break;
        }
    }
    *w = '\0';
    printf(word);
    return word[0];
}

int main() {
    char word[MAX_SIZE];
    char *w = word;
    int lim;

    getword(w, lim);
    printf("%s\n", word);
}