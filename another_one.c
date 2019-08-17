#include <stdio.h>

long long min(long long x, long long y) {
    return (x < y) ? x : y;
}

long long max(long long x, long long y) {
    return (x > y) ? x : y;
}

int main() {
    long long a, b, c;
    long long result;
    scanf("%lld %lld %lld", &a, &b, &c);

    result = 2 * c;
    result += 2 * min(a, b);
    long long d = min(a, b);
    a -= d;
    b -= d;

    if (a == 0 && b == 0) printf("%lld\n", result);
    else printf("%lld\n", ++result);
}