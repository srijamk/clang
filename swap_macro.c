#include <stdio.h>

#define swap(t, x, y)   {t c = x; x = y; y = c;}

int main() {
    int x, y;
    scanf("%d", &x);
    scanf("%d", &y);
    printf("x's old value is %d, y's old value is %d\n", x, y);
    swap(int, x, y);
    printf("x's new value is %d, y's new value is %d\n", x, y);
}