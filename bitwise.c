#include <stdio.h>

#define BIT     (1 << 2)

int main() {
   int x = 5;
    
    printf("%d\n", x);
    // 00000101 | 00001000 = 00001101
    // 00000101 & ~00000100 = 00000101 & 00000001 = 00000001 
    printf("%d\n", BIT);
    printf("%d\n", x & ~BIT);
}