#include <stdio.h>
#include <stdlib.h>


struct Node {
    int value;
    struct Node* left;
    struct Node* right;
};

struct Node* createNode(int n) {
    struct Node* node = (struct Node*) malloc(sizeof(struct Node*) * 3);
    node -> value = n;
    node -> left = NULL;
    node -> right = NULL;
    return node;
}

struct Node* addNode(struct Node* root, int val) {
    if (root == NULL) {
        root = createNode(val);
        return root;
    }

    if (root -> value == val) return root;

    if (root -> value < val) root -> left = addNode(root -> left, val);
    else root -> right = addNode(root -> right, val);
    return root;
}

void treeprint(struct Node* root) {
    if (root == NULL) return;
    printf("%d ", root -> value);
    treeprint(root -> left);

    treeprint(root -> right);
}

int main() {
    int arr[] = {15, 10, 20, 8, 12, 16, 25};
    struct Node* root = createNode(arr[0]);


    for (int i = 1; i < 7; i++) {
        addNode(root, arr[i]);
    }

    treeprint(root);
    putchar('\n');
}