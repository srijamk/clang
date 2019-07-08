#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define NUM     5

int main() {
    srand(time(0));
    for (int i = 0; i < NUM; i++) {
        printf("%d\n", ((int) (10.0 * rand() / RAND_MAX)));
    }
}