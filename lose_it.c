#include <stdio.h>
#define MIN         6
#define FOUR        4
#define EIGHT       8
#define FIFTEEN     15
#define SIXTEEN     16
#define TWENTYTHREE 23
#define FORTYTWO    42

int main() {
    int n, num, four, eight, fifteen, sixteen, twenty_three, forty_two, count;
    scanf("%d", &n);
    if (n < MIN) printf("%d\n", n);
    else {
        four = eight = fifteen = sixteen = twenty_three = forty_two = count = 0;
        for (int i = 0; i < n; i++) {
            scanf("%d", &num);
            if (num == FOUR) four++;
            else if (num == EIGHT)
                if (four > eight) eight++; else count++;
            else if (num == FIFTEEN)
                if (four > fifteen && eight > fifteen) fifteen++; else count++;
            else if (num == SIXTEEN) 
                if (four > sixteen && eight > sixteen && fifteen > sixteen) sixteen++; else count++;
            else if (num == TWENTYTHREE)
                if (four > twenty_three && eight > twenty_three && fifteen > twenty_three && sixteen > twenty_three) twenty_three++; else count++;
            else
                if (four > forty_two && eight > forty_two && fifteen > forty_two && sixteen > forty_two && twenty_three > forty_two) forty_two++; else count++;
        }
        printf("%d\n", (four - forty_two) + (eight - forty_two) + (fifteen - forty_two) + (sixteen - forty_two) + (twenty_three - forty_two) + count);
        
    }
}