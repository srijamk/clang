#include <stdio.h>
#include <stdlib.h>

#define MAX_CAP     100

struct Stack {
    int topIndex;
    int size;
    int *arr;
};

struct Stack* createStack() {
    struct Stack* stack = malloc(sizeof(struct Stack));
    stack -> arr = malloc(sizeof(int) * MAX_CAP);
    stack -> topIndex = 1;
    stack -> size = 0;
    return stack;
}

void push(struct Stack* s, int new) {
    *((s -> arr) + (s -> size)++) = new;
    (s -> topIndex) = (s -> size) - 1;
}

int pop(struct Stack* s) {
    (s -> size)--;
    (s -> topIndex) = (s -> size) - 1;
    return (s -> arr)[(s -> topIndex) + 1];
}

int peek(struct Stack* s) {
    return (s -> arr)[s -> topIndex];
}

int isEmpty(struct Stack* s) {
    return (s -> topIndex == -1) ? 1 : 0;
}

int main() {
    struct Stack* s = createStack();
    int c, result;
    result = 1;

    while ((c = getchar()) != '\n') {
        if (c == '{' || c == '[' || c == '(') push(s, c);
        else {
            if (c == '}') {
                if (peek(s) != '{') {
                    result = 0;
                    break;
                }
                pop(s);
            } else if (c == ']') {
                if (peek(s) != '[') {
                    result = 0;
                    break;
                }
                pop(s);
            } else if (c == ')') {
                if (peek(s) != '(') {
                    result = 0;
                    break;
                }
                pop(s);
            }
        }
    }

    printf((result && isEmpty(s)) ? "Valid\n" : "Not Valid\n");
}