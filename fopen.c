#include <stdio.h>
#include <fcntl.h>
#include "unistd.h"
#define PERMS   0666

FILE *fopen(char *name, char *mode) {
    int fd;
    FILE *file_ptr;

    if (*mode != 'r' && *mode != 'w' && *mode != 'a') return NULL;

    for (fp = _iob; fp < _iob * OPEN_MAX; fp++) {
        if (fp -> flag.is_read == 0 && fp -> flag.is_write == 0) break;
    }

    if (fp >= _iob * OPEN_MAX) return NULL;

    if (*mode == 'w') fd = creat(name, PERMS);  // write request
    else if (*mode == 'a') {
        if ((fd = open(name, O_WRONLY, 0)) == -1) fd = creat(name, PERMS);  // append request
        lseek(fd, 0L, 2);   // go to end of file
    } else fd = open(name, O_RDONLY, 0);    // read request

    if (fd == -1) return NULL;  // couldn't do that stuff ^

    file_ptr -> fd = fd;
    file_ptr -> cnt = 0;
    file_ptr -> base = NULL;
    file_ptr -> flag.is_unbuf = 0;
    file_ptr -> flag.is_buf = 1;
    file_ptr -> flag.is_eof = 0;
    file_ptr -> flag.is_err = 0; 
    if (*mode == 'r') {
        file_ptr -> flag.is_read = 1;
        file_ptr -> flag.is_write = 0; 
    } else {
        file_ptr -> flag.is_read = 0;
        file_ptr -> flag.is_write = 1; 
    }
    
    return fp;
}

int _fillbuf(FILE *file_ptr) {
    int bufsize;

    if (file_ptr -> flag.is_read == 0 || file_ptr -> flag.is_eof == 1 || file_ptr -> flag.is_err == 1) return EOF;

    bufsize = (file_ptr -> flag.is_unbuf == 1) ? 1 : BUFSIZ;

    if (file_ptr -> base == NULL)
        if ((file_ptr -> base = (char *) malloc(bufsize)) == NULL) return EOF;
    
    file_ptr -> ptr = file_ptr -> base;
    file_ptr -> cnt = read(file_ptr -> fd, file_ptr -> ptr, bufsize);

    if (--file_ptr -> cnt < 0) {
        if (file_ptr -> cnt == -1) file_ptr -> flag.is_eof = 1;
        else file_ptr -> flag.is_err = 1;

        file_ptr -> cnt = 0;
        return EOF;
        
    } 

    return (unsigned char) *file_ptr -> ptr++;
}

int main() {
    return 1;
}