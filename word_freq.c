#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

#define MAX_WORD        100
#define BUFFER_SIZE     100
#define MAX_SIZE        100

char buffer[BUFFER_SIZE];
int bufp = 0;

struct tnode {
    char *word;
    int freq;
    struct tnode *left_child;
    struct tnode *right_child;
};

struct tnode *talloc(void) {
    return (struct tnode *) malloc(sizeof(struct tnode));
}

void treeprint(struct tnode *p) {
    if (p != NULL) {
        treeprint(p -> left_child);
        printf("%d %s\n", p -> freq, p -> word);
        treeprint(p -> right_child);
    }
}

struct tnode* addtree(struct tnode *p, char *w) {

    int comp;

    if (p == NULL) {
        p = talloc();
        p -> word = strdup(w);
        p -> freq = 1;
        p -> left_child = p -> right_child = NULL;
    } else if ((comp = strcmp(w, p -> word)) == 0) {
        p -> freq++;
    } else if (comp < 0) {
        p -> left_child = addtree(p -> left_child, w);
    } else {
        p -> right_child = addtree(p -> right_child, w);
    }
    return p;
}

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

    while (isspace(c = getch()) && c != '\n') {
       ;
    }
    
    if (c == '\n') {
        return EOF;
    }
    if (c != EOF)
        *word++ = c;
    if (c != '_' && !isalpha(c)) {
        *word = '\0';
        return c;
    }

    for ( ; --lim > 0; words++) {
        if ((*word = getch()) != '_' && !isalnum(*word)) {
            ungetch(*word);
            break;
        }
    }
    *word = '\0';
    return word[0];
}

int main() {
    struct tnode *root;
    char word[MAX_WORD];
    char test;

    root = NULL;
    while ((test = getword(word, MAX_WORD)) != EOF) {
        if (isalpha(word[0])) {
            root = addtree(root, word);
        }
    }

    treeprint(root);
    return 0;
}