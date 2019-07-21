#include <stdio.h>

#define MAX     100

int main() {
    int n, totalSeats, party, alice, i, min, result, numParties, j;
    totalSeats = party = j = i = 0;
    
    result = numParties = 1;

    scanf("%d", &n);
    int parties[n];
    int resultParties[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &parties[i]);
        totalSeats += parties[i];
    }

    min = totalSeats / 2 + 1;
    alice = parties[0];
    party += alice;    // add alice's party
    resultParties[j++] = 1;
    
    while (i < n) {
        if (alice >= parties[i] * 2) {
            party += parties[i];
            resultParties[j++] = i + 1;
            numParties++;
        }
        if (party >= min) {
            result = numParties;
            break;
        }
        i++;
    }

    if (party < min) {
        printf("0\n");
    } else {
        printf("%d\n", numParties);
        for (int i = 0; i < numParties; i++) {
            printf("%d ", resultParties[i]);
        }

        putchar('\n');
    }
}