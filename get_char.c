#include <stdio.h>
#include <unistd.h>

int get_char() {
    int c;
    return ((read(0, &c, 1) == 1) ? c : EOF);
}

int main() {
    int get_char(void);
    
    printf("%c\n", get_char());
}