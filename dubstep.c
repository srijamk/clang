#include <stdio.h>
#include <string.h>

#define MAX_LEN     201

int in_wub(char str[], int index) {
    if (str[index] == 'W' && str[index + 1] == 'U' && str[index + 2] == 'B')
        return 1;
    return 0;
}

int main() {
    char str[MAX_LEN];
    char result[MAX_LEN];
    int index, cur, count = 0;
    int has_added_space = 0;
    scanf("%s", str);

    while (in_wub(str, index))
        index += 3;

    while (index < strlen(str)) {
        if (in_wub(str, index)) {
            if (!has_added_space) {
                result[cur++] = ' ';
                has_added_space = 1;
                count++;
            }
            index += 2;
        } else if (!in_wub(str, index)) {
            result[cur++] = str[index];
            has_added_space = 0;
            count++;
        }
        index++;
    }
    for (int i = 0; i < count; i++) {
        printf("%c", result[i]);
    }
    printf("\n");
}