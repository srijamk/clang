#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE    100001


struct node {
    int number, cur;
    int color[MAX_SIZE], dist[MAX_SIZE];
    struct node *neighbors[MAX_SIZE];
};

struct node *talloc(void) {
    return (struct node *) malloc(sizeof(struct node));
}

void treeprint(struct node **nodes) {
    for (int i = 0; i < 4; i++) {
        printf("%d\n", (nodes[i] -> number));
    }
}

int main() {
    struct node *nodes[MAX_SIZE] = {NULL};
    int n, q, a, b, c, d, x, y, u, v;
    scanf("%d %d", &n, &q);

    for (int i = 0; i < n - 1; i++) {
        scanf("%d %d %d %d", &a, &b, &c, &d);

        if (nodes[a] == NULL) {
            nodes[a] = talloc();
            
            (nodes[a] -> number) = a;
            printf("%d\n", nodes[a] -> number);
            //(nodes[a] -> cur) = 0;
            //(nodes[a] -> color)[nodes[a] -> cur] = c;
            //(nodes[a] -> dist)[nodes[a] -> cur] = d;
            //(nodes[a] -> cur)++;
        }

        if (nodes[b] == NULL) {
            nodes[b] = talloc();
            //(nodes[b] -> number) = b;
            //(nodes[b] -> cur) = 0;
            //(nodes[b] -> color)[nodes[b] -> cur] = c;
            //(nodes[b] -> dist)[nodes[b] -> cur] = d;
            //(nodes[b] -> cur)++;
        }

        (nodes[a] -> neighbors)[nodes[a] -> cur - 1] = nodes[b];
        (nodes[b] -> neighbors)[nodes[b] -> cur - 1] = nodes[a];

    }

    treeprint(nodes);
}