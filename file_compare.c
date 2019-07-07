#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_FILE_SIZE   100
#define MAX_LINE_SIZE   100

char get_line(char *line, FILE *file) {
    if (fgets(line, MAX_LINE_SIZE, file) == NULL)
        return 0;
    else
        return strlen(line);
}

int get_line_stdin(char *line) {
    int c, i;
    i = 0;


    while ((c = getchar()) != EOF && c != '\n' && c != '~') {
        line[i++] = c;

    }

    if (c == EOF || c == '~')
        return 0;

    if (c == '\n')
        line[i++] = c;
    
    line[i] = '\0';

    return i + 1;
}

void compare_files(FILE *file1, FILE *file2) {
    int c1, c2;
    char line1[MAX_FILE_SIZE], line2[MAX_FILE_SIZE];

    while ((c1 = get_line(line1, file1)) != 0 && (c2 = get_line(line2, file2)) != 0 && !strcmp(line1, line2))
        ;

    if (c1 != 0 || c2 != 0)
        printf("First difference: \n%s%s\n", line1, line2);
    else
        printf("Your files are identical.\n");
}

int main(int argc, char *argv[]) {

    char *fgets(char *line, int maxline, FILE *fp);
    void compare_files(FILE *file1, FILE *file2);

    char line[MAX_FILE_SIZE];
    char lines[MAX_FILE_SIZE][MAX_LINE_SIZE];
    int c, i, length;
    FILE *file1, *file2;
    i = 0;
    
    if (argc == 3) {
        file1 = fopen(argv[1], "r");
        file2 = fopen(argv[2], "r");
        compare_files(file1, file2);

    } else if (argc == 1) {
        printf("Type '~' to signify end of files.\n");
        while ((c = get_line_stdin(line)) != 0) {
            strcpy(lines[i++], line);        
        }
        length = i;
        getchar();
        i = 0;
        while ((c = get_line_stdin(line)) != 0) {
            if (strcmp(line, lines[i]))
                ;
            else 
                i++;
        }

        if (i != length)
            printf("First difference: \n%s%s\n", line, lines[i]);
    } else
        printf("Please provide a valid number of arguments.\n");
}