#include <stdio.h>
#include <stdlib.h>

int main() {
    int num, q, n, num_ones, num_twos, num_threes;

    scanf("%d", &q);
    for (int i = 0; i < q; i++) {
        num_ones = num_twos = num_threes = 0;
        scanf("%d", &n);
        for (int j = 0; j < n; j++) {
            scanf("%d", &num);
            if (num % 3 == 0) num_threes++;
            else if (num % 3 == 1) num_ones++;
            else num_twos++;
        }
        if (num_ones > num_twos) {
            num_threes += num_twos;
            num_threes += (num_ones - num_twos) / 3;
        } else {
            num_threes += num_ones;
            num_threes += (num_twos - num_ones) / 3;            
        }
        printf("%d\n", num_threes);
    }
}