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

int main(int argc, char *argv[]) {

    char *fgets(char *line, int maxline, FILE *fp);

    char line1[MAX_FILE_SIZE], line2[MAX_FILE_SIZE];
    int c1, c2;
    
    if (argc < 3) {
        printf("ERROR: TOO FEW FILES\n");
        return 1;
    } else {
        FILE *file1, *file2;
        file1 = fopen(argv[1], "r");
        file2 = fopen(argv[2], "r");

        while ((c1 = get_line(line1, file1)) != 0 && (c2 = get_line(line2, file2)) != 0 && !strcmp(line1, line2))
            ;
        
        if (c1 != 0 || c2 != 0)
            printf("First difference: \n%s%s\n", line1, line2);
        else
            printf("Your files are identical.\n");
    }
}