#include <stdio.h>
#define MINIMUM 80
#define MAXLINE 81

int get_line(char line[], int lim);
void copy(char to[], char from[]);

main() {
    char cur_line[MAXLINE];
    char line[MAXLINE];
    int length;

    while ((length = get_line(line, MAXLINE)) > 0) {
        if (length >= MINIMUM) {
            printf("%s", line);
        }
    }
}

int get_line(char line[], int lim) {
    int c, i;

    for (i = 0; i < lim - 1 && (c=getchar())!=EOF && c != '\n'; ++i) {
        line[i] = c;
    }
    if (c == '\n')
        line[i] = c;
        ++i;
    line[i] = '\0';
    return i;
}

void copy(char to[], char from[]) {
    int i;

    for (i = 0; from[i] != '\0'; ++i)
        to[i] = from[i];

}

