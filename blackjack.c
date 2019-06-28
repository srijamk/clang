#include <stdio.h>
#define QUEEN_VALUE     10
#define NUM_SUITS       4
#define MIN_CARD        2
#define MAX_CARD        9
#define ACE_VALUE       11

int main() {
    int n;
    scanf("%d", &n);
    n -= QUEEN_VALUE;

    if (n == QUEEN_VALUE)
        printf("15\n");
    else if (n == 1) {
        printf("4\n");
    }
    else if (n == ACE_VALUE) {
        printf("4\n");
    }
    else if (n >= MIN_CARD && n <= MAX_CARD)
        printf("%d\n", NUM_SUITS);
    else 
        printf("0\n");
}