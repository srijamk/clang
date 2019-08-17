#include <stdio.h>
#include "uthash.h"

int main() {
    int n;
    char a[10];
    scanf("%d", &n);

    struct hash *strings = NULL;

    for (int i = 0; i < n; i++) {
        scanf("%s", a);
        HASH_FIND_INT(strings, &a)
    }
}