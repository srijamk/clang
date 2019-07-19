#include <stdio.h>
#include <math.h>

int main() {
    long long n, k, cur, curTot;
    scanf("%lld %lld", &n, &k);

    cur = (int)(sqrt((double) n * 2)) - 1;
    curTot = (cur * (cur + 1)) / 2;
    while ((cur + (curTot - k)) != n) {
        cur++;
        curTot = (cur * (cur + 1)) / 2;
    }

    printf("%lld\n", curTot - k);
}