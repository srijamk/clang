#include <stdio.h>
#include <math.h>
#include <ctype.h>

#define MAX_LEN     100

int stack_pos = 0;
double operands[MAX_LEN];

void push(double o) {
    operands[stack_pos++] = o;
}

double pop() {
    return operands[--stack_pos];
}

double atof(char s[]) {
    int i, sign, sci_not, sci_sign; 
    double result, power;
    i = sci_not = 0;
    
    sign = (s[i] == '-') ? -1 : 1;
    if (s[i] == '+' || s[i] == '-') {
        i++;
    }

    for (result = 0; isdigit(s[i]); i++) {
        result = (10 * result) + (s[i] - '0');
    }

    if (s[i] == '.') {
        i++;
    }

    for (power = 1.0; isdigit(s[i]); i++) {
        result = (10 * result) + (s[i] - '0');
        power *= 10.0;
    }
    
    if (s[i] == 'e' || s[i] == 'E') {
        i++;
    }

    if (s[i] == '-') {
        sci_sign = -1;
        i++;
    } else {
        sci_sign = 1;
    }

    for (i = i; isdigit(s[i]); i++) {
        sci_not = (10 * sci_not) + (s[i] - '0');
    }

    return (sign * result / power) * pow(10, sci_sign * sci_not);
}

int expr(int *ptr, int operands[]) {
    
    return *ptr;
}


int main() {
    int i, j, c = 0;
    double o1;
    
    c = getchar();
    while ((c >= '0' && c <= '9') || c == ' ') {
        if (c != ' ')
            push(c - '0');
        c = getchar();
    }
    getchar();

    while ((c = getchar()) != EOF) {
        switch (c) {
            case '+':
                push(pop() + pop());
            case '-':
                o1 = pop();
                push(pop() - o1);
            case '*':
                push(pop() * pop());
            case '/':
                push(pop() / pop());
        }
    }

    printf("%f\n", pop());
} 