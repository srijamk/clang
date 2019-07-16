#include <stdio.h>
#include <stdlib.h>

#define TWO 2
#define THREE 3

struct node
{
  int data;
  struct node *next;
};

int length(struct node *head)
{
  struct node *cur = head;
  int count = 0;

  while (cur != NULL)
  {
    count++;
    cur = cur->next;
  }

  return count;
}

struct node *buildOneTwoThree()
{
  struct node *one = (struct node *)malloc(sizeof(struct node *));
  struct node *two = (struct node *)malloc(sizeof(struct node *));
  struct node *three = (struct node *)malloc(sizeof(struct node *));

  one->data = 1;
  one->next = two;
  two->data = TWO;
  two->next = three;
  three->data = THREE;
  three->next = NULL;

  return one;
}

void push(struct node **headRef, int newData)
{
  struct node *new = (struct node *)malloc(sizeof(struct node *));
  new->data = newData;
  new->next = *headRef;

  *headRef = new;
}

void sortedInsert(struct node **headPtr, struct node *newNode)
{
  int newData = newNode->data;
  struct node *cur = *headPtr;

  if (newData <= (cur->data))
  {
    newNode->next = *headPtr;
    *headPtr = newNode;
    return;
  }

  while ((cur->next) != NULL && newData > ((cur->next)->data))
  {
    cur = cur->next;
  }

  cur->next = newNode;
  newNode->next = cur->next;
  return;
}

void insertSort(struct node **headPtr)
{
  struct node *newHead = *headPtr;
  struct node *cur = *headPtr;
  while ((cur->next) != NULL)
  {
    sortedInsert(&newHead, cur);
    cur = cur->next;
  }
  sortedInsert(&newHead, cur);
  *headPtr = newHead;
}

void append(struct node **aPtr, struct node **bPtr)
{
  struct node *cur = *aPtr;
  while ((cur->next) != NULL)
  {
    cur = cur->next;
  }
  cur->next = *bPtr;
  *bPtr = NULL;
}

void frontBackSplit(struct node *source, struct node **frontPtr, struct node **backPtr)
{
  int len = length(source);
  if (len < TWO)
  {
    *frontPtr = source;
    *backPtr = NULL;
  }
  else if (len == TWO)
  {
    *frontPtr = source;
    *backPtr = (source->next);
  }
  else if (len % 2)
  {
    struct node *cur = source;
    for (int i = 0; i < len / 2; i++)
    {
      cur = cur->next;
    }
    *frontPtr = source;
    *backPtr = cur;
  }
  else
  {
    struct node *cur = source;
    for (int i = 0; i < len / 2 + 1; i++)
    {
      cur = cur->next;
    }
    *frontPtr = source;
    *backPtr = cur;
  }
}

void removeDups(struct node *head)
{
  struct node *cur = head;
  int curData = (cur->data);
  while ((cur->next) != NULL)
  {
    if (((cur->next)->data) == curData)
      cur->next = (cur->next)->next;
    else
      cur = cur->next;
    curData = cur->data;
  }
}

int pop(struct node **headPtr)
{
  int headVal = (*headPtr)->data;
  *headPtr = (*headPtr)->next;
  return headVal;
}

void print(struct node *head)
{
  struct node *cur = head;
  while ((cur->next) != NULL)
  {
    printf("%d ", cur->data);
    cur = cur->next;
  }

  printf("%d\n", cur->data);
}

void moveNode(struct node **destPtr, struct node **sourcePtr)
{
  struct node *newNode = *sourcePtr; // new node set to list head
  *sourcePtr = newNode->next;        // new head set to next
  newNode->next = *destPtr;          // push new node to dest list
  *destPtr = newNode;
}

void alternatingSplit(struct node *source, struct node **aPtr, struct node **bPtr)
{
  struct node *a = NULL;
  struct node *b = NULL;

  struct node *cur = source;
  while (cur != NULL)
  {
    moveNode(&a, &cur);
    if (cur != NULL)
      moveNode(&b, &cur);
  }
  *aPtr = a;
  *bPtr = b;
}

struct node *shuffleMerge(struct node *a, struct node *b)
{
  struct node *new = NULL;
  struct node *aCur, *bCur = NULL;
  aCur = a;
  bCur = b;

  while (!(aCur == NULL && bCur == NULL))
  {
    if (aCur != NULL)
      moveNode(&new, &aCur);
    if (bCur != NULL)
      moveNode(&new, &bCur);
  }

  return new;
}

void addAtEnd(struct node *head, int newData)
{
  struct node *new = (struct node *)malloc(sizeof(struct node));
  new->data = newData;
  new->next = NULL;

  struct node *cur = head;
  while ((cur->next) != NULL)
  {
    cur = cur->next;
  }
  cur->next = new;
}

struct node *sortedMerge(struct node *a, struct node *b)
{
  struct node *new = NULL;
  struct node *aCur, *bCur = NULL;
  aCur = a;
  bCur = b;
  while (!(aCur == NULL && bCur == NULL))
  {
    if (bCur == NULL)
      moveNode(&new, &aCur);
    else if (aCur == NULL)
      moveNode(&new, &bCur);
    else if ((aCur->data) <= (bCur->data))
      moveNode(&new, &aCur);
    else
      moveNode(&new, &bCur);
  }

  return new;
}

void mergeSort(struct node *head)
{
    struct node *a;
    struct node *b;
    if ((head -> next) == NULL || (head -> next -> next) == NULL) {
        return;
    } else {
        frontBackSplit(head, &a, &b);
    }
    mergeSort(a);
    mergeSort(b);

    head = sortedMerge(a, b);
}

struct node* sortedIntersect(struct node* a, struct node* b) {
    struct node* head = (struct node*) malloc(sizeof(struct node));
    int lastAdded = a -> data;
    head -> data = lastAdded;
    head -> next = NULL;

    struct node* aCur = a;
    struct node* bCur = b;
    while (!(aCur == NULL && bCur == NULL)) {
        if (aCur == NULL) {
            if ((bCur -> data) != lastAdded) {
                push(&head, (bCur -> data));
                lastAdded = bCur -> data;
            }
            bCur = bCur -> next;
        } else if (bCur == NULL) {
            if ((aCur -> data) != lastAdded) {
                push(&head, (aCur -> data));
                lastAdded = aCur -> data;
            }
            aCur = aCur -> next;
        } else {
            if ((aCur -> data) <= (bCur -> data)) {
                if ((aCur -> data) != lastAdded) {
                    push(&head, aCur -> data);
                    lastAdded = aCur -> data;
                }
                aCur = aCur -> next;
            } else {
                if ((bCur -> data) != lastAdded) {
                    push(&head, bCur -> data);
                    lastAdded = bCur -> data;
                }
                bCur = bCur -> next;
            } 
        }
    }
    return head;
}

void reverse(struct node** headPtr) {
    if ((*headPtr) -> next == NULL) {
        return;
    }

    struct node* cur = *headPtr;
    struct node* curHead = *headPtr;

    struct node* curNext = NULL;

    while (((cur -> next) -> next) != NULL) {

        curNext = (cur -> next) -> next;
        *headPtr = cur -> next;
        (*headPtr) -> next = curHead;
        curHead = *headPtr;

        cur -> next = curNext;
    }

    *headPtr = cur -> next;
    (*headPtr) -> next = curHead;
    cur -> next = NULL;
    return;
}

void recursiveReverse(struct node** headPtr) {
    if (*headPtr == NULL) return;

    struct node* first;
    struct node* rem;

    first = *headPtr;
    rem = first -> next;

    if (rem == NULL) return;

    recursiveReverse(&rem);

    first -> next -> next = first;
    first -> next = NULL;

    *headPtr = rem;
}

int main()
{
  struct node *a = NULL;
  struct node *b = NULL;
  a = buildOneTwoThree();
  b = buildOneTwoThree();
  
  append(&a, &b);
  recursiveReverse(&a);
  print(a);

}
