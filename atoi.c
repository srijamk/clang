#include <stdio.h>
#include <string.h>

int atoi(char line[]) {
    int i, result = 0;

    for (i = 0; i < strlen(line); ++i) {
        result = 10 * result + (line[i] - '0'); 
    }
    return result;
}

int main() {
    char line[100];
    scanf("%s", line);
    printf("%d\n", atoi(line));
}
