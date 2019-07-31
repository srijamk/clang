#include <stdio.h>

long min(long x, long y) {
    return (x < y) ? x : y;
}

long max(long x, long y) {
    return (x > y) ? x : y;
}

int main() {
    long n, p1, p2, p3;
    scanf("%ld", &n);
    for (int i = 0; i < n; i++) {
        long result = 0;
        scanf("%ld %ld %ld", &p1, &p2, &p3);
        
        long left = p1;
        if (p2 + left == p3) {
            printf("%ld", p3);
            continue;
        }
        else if (p3 + left == p2) {
            printf("%ld", p2);
            continue;
        }
        else if (p2 + left < p3) result = max(result, p2 + left);
        else if (p3 + left < p2) result = max(result, p3 + left);
        else {
            result = max(result, ((p2 + p3) / 2) + (left / 2));
        }

        left = p2;
        if (p1 + left == p3) {
            printf("%ld", p3);
            continue;
        }
        else if (p3 + left == p1) {
            printf("%ld", p1);
            continue;
        }
        else if (p1 + left < p3) result = max(result, p1 + left);
        else if (p3 + left < p1) result = max(result, p1 + left);
        else result = max(result, ((p1 + p3) / 2) + (left / 2));

        left = p3;
        if (p1 + left == p2) {
            printf("%ld", p2);
            continue;
        }
        else if (p2 + left == p1) {
            printf("%ld", p1);
            continue;
        }
        else if (p1 + left < p2) result = max(result, p1 + left);
        else if (p2 + left < p1) result = max(result, p2 + left);
        else result = max(result, ((p1 + p2) / 2) + (left / 2));

        printf("%ld\n", result);
    }
}