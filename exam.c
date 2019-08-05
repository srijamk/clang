#include <stdio.h>
#define MAX     1000

int max(int x, int y) {
    return (x > y) ? x : y;
}
int main() {
    int n, m;
    scanf("%d %d", &n, &m);
    char ans[MAX];
    int pts[MAX];
    int result = 0;
    int a[MAX] = {0};
    int b[MAX] = {0};
    int c[MAX] = {0};
    int d[MAX] = {0};
    int e[MAX] = {0};

    for (int i = 0; i < n; i++) {
        scanf("%s", ans);
        for (int j = 0; j < m; j++) {
            if (ans[j] == 'A') a[j]++;
            else if (ans[j] == 'B') b[j]++;
            else if (ans[j] == 'C') c[j]++;
            else if (ans[j] == 'D') d[j]++;
            else e[j]++;
        }
    }

    for (int i = 0; i < m; i++) {
        scanf("%d", &pts[i]);
    }

    
    for (int i = 0; i < m; i++) {
        result += max(max(max(max(pts[i] * a[i], pts[i] * b[i]), pts[i] * c[i]), pts[i] * d[i]), pts[i] * e[i]);
    }

    printf("%d\n", result);
}