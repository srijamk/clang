#include <stdio.h>
#include <string.h>

int main() {
    int length, num, j, k;
    scanf("%d", &length);
    char word[length], name[length];
    scanf("%s", word);
    scanf("%d", &num);

    for (int i = 0; i < num; i++) {
        scanf("%s", name);
        for (j = k = 0; j < length; j++) {
            if (k == strlen(name)) {
                printf("%d\n", j);
                break;
            }
            if (word[j] == name[k]) {
                k++;
            }

        }
        printf("%d\n", j);
    }

}