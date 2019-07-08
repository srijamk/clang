#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include "unistd.h"

#define BUFFER_SIZE     100

void error(char *fmt,...);

int main(int argc, char *argv[]) {
    int fd;
    void filecopy(int ifd, int ofd);

    if (argc == 1) filecopy(0, 1);
    else {
        while (--argc > 0) {
            if ((fd = open(*++argv, O_RDONLY)) == -1) error("cat: can't open %s\n", *argv);
            else {
                filecopy(fd, 1);
                close(fd);
            }
        }
    }
    return 0;
}

void filecopy(int ifd, int ofd) {
    int n;
    char buffer[BUFFER_SIZE];

    while ((n = read(ifd, buffer, BUFFER_SIZE)) > 0) {
        if (write(ofd, buffer, n) != n) error("cat: write error\n");
    }
}