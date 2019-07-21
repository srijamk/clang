#include <stdio.h>
#include <string.h>

int main() {
    int n, index, pos, open;
    scanf("%d %d", &n, &index);
    char sentence[n];
    scanf("%s", sentence);

    open = 0;
    pos = index + 1;

    for (int i = 0; i < strlen(sentence); i++) {
        printf("%d\n", open);
        if (sentence[i] == '(') open++;
        else if (sentence[i] == ')') {
            if (open == 0) printf("%d\n", pos);
            else open--;
        }
        pos++;
    } 

}