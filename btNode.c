#include <stdio.h>
#include <stdlib.h>

struct btNode {
    int value;
    struct btNode* left;
    struct btNode* right;
};

int insertLeft(struct btNode* head, int val) {
    struct btNode* new = (struct btNode *) malloc(sizeof(struct btNode));
    new -> value = val;
    (new -> left) = (new -> right) = NULL;
    (head -> left) = new;
    return val;
}

struct btNode* findLargest(struct btNode* head) {
    while (head -> right != NULL) {
        head = (head -> right);
    }
    return head;
}

struct btNode* findSecondLargest(struct btNode* head) {

    if (((head -> right) -> right) == NULL) {
        if (((head -> right) -> left) == NULL) return head;
        else {
            head = head -> right;
            head = head -> left;

            while ((head -> right) != NULL) {
                head = head -> right;
            }
            return head;
        }

    } else {

        return findSecondLargest(head -> right);
    }
}

struct btNode* findSecondMinimum(struct btNode* head) {
    if (((head -> left) -> left) == NULL) {
        if (((head -> left) -> right) == NULL) return head;
        else {
            head = head -> left;
            head = head -> right;

            while ((head -> left) != NULL) {
                head = head -> left;
            }
            return head;
        }

    } else {

        return findSecondLargest(head -> left);
    }    
}


int insertRight(struct btNode* head, int val) {
    struct btNode* new = (struct btNode *) malloc(sizeof(struct btNode));
    new -> value = val;
    (new -> left) = (new -> right) = NULL;
    (head -> right) = new;
    return val;
}

int main() {
    struct btNode* head = (struct btNode*) malloc(sizeof(struct btNode));
    struct btNode* three = (struct btNode*) malloc(sizeof(struct btNode));
    struct btNode* eight = (struct btNode*) malloc(sizeof(struct btNode));
    struct btNode* one = (struct btNode*) malloc(sizeof(struct btNode));
    struct btNode* four = (struct btNode*) malloc(sizeof(struct btNode)); 
    struct btNode* seven = (struct btNode*) malloc(sizeof(struct btNode)); 
    struct btNode* twelve = (struct btNode*) malloc(sizeof(struct btNode)); 
    struct btNode* ten = (struct btNode*) malloc(sizeof(struct btNode)); 
    struct btNode* nine = (struct btNode*) malloc(sizeof(struct btNode)); 
    struct btNode* eleven = (struct btNode*) malloc(sizeof(struct btNode)); 

    seven -> value = 7;
    twelve -> value = 12;
    ten -> value = 10;
    nine -> value = 9;
    eleven -> value = 11;
    four -> value = 4;
    one -> value = 1;
    eight -> value = 8;
    three -> value = 3;
    head -> value = 5;

    head -> left = three;
    head -> right = eight;
    three -> left = one;
    three -> right = four;
    eight -> left = seven;
    eight -> right = twelve;
    seven -> left = NULL;
    seven -> right = NULL;
    twelve -> left = ten;
    twelve -> right = NULL;
    ten -> left = nine;
    ten -> right = eleven;
    nine -> left = NULL;
    nine -> right = NULL;
    eleven -> left = NULL;
    eleven -> right = NULL;
    four -> left = NULL;
    four -> right = NULL;
    one -> left = NULL;
    one -> right = NULL;

    printf("%d\n", (findSecondMinimum(head) -> value));
}