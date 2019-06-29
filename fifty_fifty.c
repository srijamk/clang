#include <stdio.h>
#include <stdlib.h>

int compare (const void * a, const void * b) {
   return ( *(char*)a - *(char*)b );
}

int main() {
    char word[5];
    char l[2];
    int result = 1;

    for (int i = 0; i < 4; i++) {
        word[i] = getchar();
    }
    qsort(word, 4, sizeof(char), compare);
    if ((word[0] == word[1]) && (word[2] == word[3]) && (word[0] != word[2]))
        printf("Yes\n");
    else
        printf("No\n");
    
}