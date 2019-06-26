#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int n, m, i, k, max_num, result;
    i = 0;

    scanf("%d %d", &n, &m);
    int read[1002] = {0};
    int puzzles[m];
    memset(puzzles, 0, m * sizeof(int));

    while (i < m) {
       int d;
       scanf("%d", &d);
       read[d]++; 
       i++;
    }
    
    max_num = read[i];
    printf("%d\n", max_num);

    for (int j = k = 0; read[j] <= max_num; j++) {
        if (read[j] > 0) {
            for (int l = 0; l < read[j]; l++) {
                puzzles[k++] = j;
            }
        }
    }

    result = puzzles[n - 1] - puzzles[0];
    printf("%d\n", puzzles[0]);
    for (int i = 0; i < m - n - 1; i++) {
        result = (result > (puzzles[i + n] - puzzles[i])) ? result : (puzzles[i + n] - puzzles[i]); 
    }
    printf("%d\n", result);
    
}