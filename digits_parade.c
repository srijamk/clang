#include <stdio.h>
#include <regex.h>

#define MAX         100000
#define THIRTEEN    13

int main() {
    char find[MAX];
    long mults[MAX];
    char newFind[3 * MAX];
    int c, len, j;
    len = j = 0;

    for (int i = 0; i < MAX; i++) {
        mults[i] = THIRTEEN * i;
    }

    while ((c = getchar()) != '\n') {
        find[len++] = c;
    }



    for (int i = 0; i < len; i++) {
        if (find[i] == '?') {
            newFind[j++] = '[';
            newFind[j++] = '0';
            newFind[j++] = '-';
            newFind[j++] = '9';
            newFind[j++] = ']';
        } else newFind[j++] = find[i];
    }

    newFind[j++] = ' ';
    newFind[j++] = '$';

    

    printf("%s %s\n", find, newFind);


}