#include <stdio.h>

long gcf(long a, long b) {
    if (a == 0)
        return b;
    return gcf(b % a, a);
}

long lcm(long a, long b) {
    return (a * b) / gcf(a, b);
}

int main() {
    long a, b, c, d, e, l;
    scanf("%ld %ld %ld %ld", &a, &b, &c, &d);
    e = b - a + 1;
    l = lcm(c, d);

    long div1 = b / c - (a - 1) / c;
    long div2 = b / d - (a - 1) / d;
    long div3 = b / l - (a - 1) / l;

    printf("%ld\n", e - (div1 + div2 - div3));
}