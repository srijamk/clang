#include <stdio.h>
#include <fcntl.h>
#include "unistd.h"

#define BUFFER_SIZE     100
#define PERMS           0666

int main(int argc, char *argv[]) {
    int fd1, fd2, n;
    char buffer[BUFFER_SIZE];

    // flags
    // printf("%d\n", O_RDONLY);   // O_RDONLY = 0
    // printf("%d\n", O_WRONLY);   // O_WRONLY = 1
    // printf("%d\n", O_RDWR);     // O_RDWR = 2

    if (argc != 3) {
        printf("Usage: cp from to\n");
    }
    if ((fd1 = open(argv[1], O_RDONLY, 0)) == -1)
        printf("cp: can't open %s", argv[1]);
    if ((fd2 = creat(argv[2], PERMS)) == -1)
        printf("cp: can't write in %s", argv[2]);
    else {
        while ((n = read(fd1, buffer, BUFFER_SIZE)) > 0)
            write(fd2, buffer, n);
    }
}