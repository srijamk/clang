#include <stdio.h>

void bin(int n) 
{ 
    int i; 
    for (i = 1 << 7; i > 0; i = i / 2) 
        (n & i) ? printf("1") : printf("0"); 
    printf("\n");
} 

int rrot(int x, int n) {
    return (x % 2 == 0 ? (x >> n) : (x >> n) | (1 << 7));
}

int main() {
    int x, n;
    // 00000101 
    scanf("%d %d", &x, &n);

    bin(rrot(x, n));
}