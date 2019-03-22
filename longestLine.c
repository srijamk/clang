#include <stdio.h>
#define MAXLINE 1000

int get_line (char line[], int maxline);
void copy (char to[], char from[]);

main() {
    int len;
    int max;
    char line[MAXLINE];
    char longest[MAXLINE];

    max = 0;
    while ((len = get_line(line, MAXLINE)) > 0) {   // while we have another line
        if (len > max) { 
            max = len;  // update max
            copy(line, longest);    // record the longest line
        }
    }
    if (max > 0) {
        printf("%s", longest);  // just print the longest line
    }
    return 0;
}

int get_line (char s[], int lim) {
    int c, i;

    for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i) {  // records up to MAXLINE chars of next line
        s[i] = c;
    }
    if (c == '\n') {    // checks for end of line
        s[i] = c;
        ++i;    // moves to next char to prepare for end of line
    }
    s[i] = '\0';    // adds end of line signal
    return i;
}

void copy (char from[], char to[]) {
    int i;

    i = 0;
    while ((to[i] = from[i]) != '\0') {     // assigns from[] values to to[] values and simultaneously checks for end of line
        ++i;
    }
}
