#include <stdio.h>

int solve(int k, int n, int a, int b) {
    if (k <= (n * b))
        return -1;
    if ((n * a) < k)
        return n;
    if ((k >= a) && ((k / a) + (k - a * (k / a) / b >= n)))
        return k / a; 
    if ((k >= a) && ((k / a - 1) + (k - a * (k / a - 1)) / b >= n))
        return k / a - 1;
    if (k / b > n)
        return 0;
    return -1;
}

int main() {
    int q, k, n, a, b;

    scanf("%d", &q);
    
    for (; q > 0; q--) {
        scanf("%d %d %d %d", &k, &n, &a, &b);
        printf("%d\n", solve(k, n, a, b));
    }
}