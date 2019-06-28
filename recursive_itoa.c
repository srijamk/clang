#include <stdio.h>
#include <math.h>
#include <stdlib.h>

#define MAX_LEN     100
void itoa(int n, char s[]) {
    static int i;

    if (n / 10)
        itoa(n / 10, s);
    else {
        i = 0;
        if (n < 0)
            s[i++] = '-';
    }

    s[i++] = abs(n) % 10 + '0';
    s[i] = '\0';
}

int main() {
    int n;
    char s[MAX_LEN] = {'0'};
    scanf("%d", &n);
    itoa(n, s);
    printf("%s\n", s);
    getchar();
}