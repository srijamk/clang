#include <stdio.h>
#include <limits.h>

int main() {
    printf("minimum value of char: %d\n", CHAR_MIN);
    printf("maximum value of char: %d\n", CHAR_MAX);
    printf("minimum value of short int: %d\n", SHRT_MIN);
    printf("maximum value of short int: %d\n", SHRT_MAX);
    printf("minimum value of int: %d\n", INT_MIN);
    printf("maximum value of int: %d\n", INT_MAX);
    printf("minimum value of long int: %ld\n", LONG_MIN);
    printf("maximum value of long int: %ld\n", LONG_MAX);
    printf("minimum value of unsigned short int: %d\n", USHRT_MAX - pow(2, sizeof(unsigned short)));
    printf("maximum value of unsigned short int: %d\n", USHRT_MAX);
    printf("minimum value of unsigned char: %d\n", UCHAR_MAX - pow(2, sizeof(unsigned char)));
    printf("maximum value of unsigned char: %d\n", UCHAR_MAX);
    printf("minimum value of unsigned long int: %ld\n", ULONG_MAX - pow(2, sizeof(unsigned long)));
    printf("maximum value of unsigned long int: %lu\n", ULONG_MAX);
}