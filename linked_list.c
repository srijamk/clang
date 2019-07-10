#include <stdio.h>
#include <stdlib.h>

#define TWO     2
#define THREE   3

struct node {
    int data;
    struct node* next;
};

int length(struct node* head) {
    struct node* cur = head;
    int count = 0;

    while (cur != NULL) {
        count++;
        cur = cur -> next;    
    }

    return count;
}

struct node* buildOneTwoThree() {
    struct node* one = (struct node*) malloc(sizeof(struct node*));
    struct node* two = (struct node*) malloc(sizeof(struct node*));
    struct node* three = (struct node*) malloc(sizeof(struct node*));

    one -> data = 1;
    one -> next = two;
    two -> data = TWO;
    two -> next = three;
    three -> data = THREE;
    three -> next = NULL;

    return one;
}

void push(struct node** headRef, int newData) {
    struct node* new = (struct node*) malloc(sizeof(struct node*));
    new -> data = newData;
    new -> next = *headRef;

    *headRef = new;

}

int main() {
    struct node* head;
    struct node* oneTwoThreeHead;
    struct node** headPtr = &head;

    head = (struct node*) malloc(sizeof(struct node*));
    head -> data = 1;
    head -> next = NULL;
    printf("%d\n", length(head));

    // oneTwoThreeHead = (struct node*) malloc(sizeof(struct node*));
    // oneTwoThreeHead = buildOneTwoThree();
    // printf("%d\n", oneTwoThreeHead -> data);

    push(headPtr, 3);
}