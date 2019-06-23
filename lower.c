#include <stdio.h>

char lower(int c) {
    return (c >= 'A' && c <= 'Z' ? c + 'a' - 'A' : c);

}

int main() {
    char c;
    scanf("%c", &c);
    printf("%c\n", lower(c));
}