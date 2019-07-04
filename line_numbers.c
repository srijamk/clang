#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

#define MAX_NUM             100
#define MAX_SIZE            100
#define MAX_NUM_WORDS       100
#define MAX_WORD_LEN        100

char buffer[MAX_SIZE];
int bufp = 0;
int isNew = 0;
int line_num = 0;

struct node {
    char *word;
    int lines[MAX_NUM];
    struct node* left_child;
    struct node* right_child;
};

struct node * talloc(void) {
    return (struct node *) malloc(sizeof(struct node));
}

char getword(char *word, int lim) {
    int c, getch(void);
    void ungetch(int);

    while (isspace(c = getch()) && c != '\n') {
       ;
    }
    
    if (c == '\n')
        line_num++;

    if (c == '~')
        return EOF;

    if (c != EOF)
        *word++ = c;
    if (c != '_' && !isalpha(c)) {
        *word = '\0';
        return c;
    }

    for ( ; --lim > 0; word++) {
        if ((*word = getch()) != '_' && !isalnum(*word)) {
            ungetch(*word);
            break;
        }
    }
    *word = '\0';
    return word[0];
}


void treeprint(struct node *root) {
    if (root != NULL) {
        treeprint(root -> left_child);
        printf("%s: ", root -> word);
        for (int i = 0; i < line_num + 1; i++) {
            if ((root -> lines)[i] == 1)
                printf("%d ", i + 1);
        }
        printf("\n");
        treeprint(root -> right_child);
    }
}

struct node* add_line_num(struct node *root, char *w, int line_num) {

    int cmp;

    if (root == NULL) {  // new node

        root = talloc();
        memset(root -> lines, 0, sizeof(int) * MAX_NUM_WORDS);

        root -> word = strdup(w);
        (root -> lines)[line_num] = 1;
        root -> left_child = root -> right_child = NULL;
        return root;
        
    }
    else if ((cmp = strcmp(w, root -> word)) == 0) {
        //printf("%d\n", line_num);

        (root -> lines)[line_num] = 1;
        return root;

    } else if (cmp < 0) {  // new word precedes root in alphabet
        //printf("less\n");

        root -> left_child = add_line_num(root -> left_child, w, line_num);
    } else if (cmp > 0) {
        //printf("greater\n");

        root -> right_child = add_line_num(root -> right_child, w, line_num);
    }

    return root;
}

int getch() {
    return (bufp > 0) ? buffer[--bufp] : getchar();
}

void ungetch(int c) {
    if (bufp >= MAX_SIZE)
        printf("too many chars bro\n");
    else
        buffer[bufp++] = c;
}

int main() {
    char word[MAX_WORD_LEN];
    char test;
    struct node *root;
    root = NULL;

    while ((test = getword(word, MAX_WORD_LEN)) != EOF) {
        if (isalpha(word[0])) {
            root = add_line_num(root, word, line_num);
        }
    }

    treeprint(root);
}