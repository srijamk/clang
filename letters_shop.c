#include <stdio.h>
#include <string.h>

int compare(const char *a, const char *b) {
    if (*a > *b) {
        return 1;
    } else if (*b > *a) {
        return -1;
    }
    return 0;
}

int main() {
    int length, num, j, k;
    scanf("%d", &length);
    char word[length], name[length];
    scanf("%s", word);
    scanf("%d", &num);

    for (int i = 0; i < num; i++) {
        scanf("%s", name);
        qsort(name, strlen(name), sizeof(int), compare);
        for (j = 0; j < length; j++) {
            
        }
    }

}