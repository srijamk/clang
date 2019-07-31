#include <stdio.h>
#include <math.h>

long numDivisors(long num) {
    long result = 0;
    for (long i = 1; i <= num / 2; i++) {
        if (num % i == 0) result++;
    }
    return result + 1;
}

int main() {
    long num = 1000;
    long triangle = (num * (num + 1)) / 2;

    while (numDivisors((num * (num + 1)) / 2) < 500) num++;

    printf("%ld\n", num);
}