#include <stdio.h>

int main() {
    int n, cur, c;
    scanf("%d", &n);
    getchar();

    cur = 1;
    while ((cur * (cur + 1) / 2) <= n) {

        for (int i = 0; i < cur; i++) {
            c = getchar();
        }
        putchar(c);
        cur++;
    }    
    
    printf("\n");
}