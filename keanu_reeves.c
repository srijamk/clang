#include <stdio.h>

#define MAX_LEN     100

int main() {
    int length, num_ones, i;
    num_ones = i = 0;
    char str[MAX_LEN];

    scanf("%d", &length);
    scanf("%s", str);

    if (length % 2 == 1)
        printf("1\n%s\n", str);
    else {
        for (int i = 0; i < length; i++) {
            if (str[i] == '1')
                num_ones++;
            if (num_ones > length / 2)
                break;
        }
        if (num_ones == length / 2) {
            printf("2\n");
            printf("%c ", str[0]);
            i = 1;
            while (i < length) {

                printf("%c", str[i]);
                i++;
            }
            printf("\n");
        } else {
            printf("1\n%s\n", str);
        }
    }
}