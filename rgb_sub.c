#include <stdio.h>
#include <limits.h>

int min(int x, int y) {
    return (x < y) ? x : y;
}

int main() {
    int q, n, k, s, result;
    scanf("%d", &q);
    for (int i = 0; i < q; i++) {
        result = INT_MAX;

        scanf("%d %d",  &n, &k);
        int rgb[n], gbr[n], brg[n];
        char s[n];
        scanf("%s", s);

        for (int i = 0; i < n - k + 1; i++) {
            int j;
            for (j = 0; j < k; j++) {
                if (j == 0) rgb[j] = (s[i + j] == 'R') ? 0 : 1;
                else if ((j + 1) % 3 == 1) {
                    rgb[j] = (s[i + j] == 'R') ? rgb[j - 1] : rgb[j - 1] + 1;
                } else if ((j + 1) % 3 == 2) {
                    rgb[j] = (s[i + j] == 'G') ? rgb[j - 1] : rgb[j - 1] + 1;
                } else if ((j + 1) % 3 == 0) {
                    rgb[j] = (s[i + j] == 'B') ? rgb[j - 1] : rgb[j - 1] + 1;
                }
            }
            result = min(result, rgb[j - 1]);
        }

        for (int i = 0; i < n - k + 1; i++) {
            int j;
            for (j = 0; j < k; j++) {
                if (j == 0) rgb[j] = (s[i + j] == 'G') ? 0 : 1;
                else if ((j + 1) % 3 == 1) {
                    rgb[j] = (s[i + j] == 'G') ? rgb[j - 1] : rgb[j - 1] + 1;
                } else if ((j + 1) % 3 == 2) {
                    rgb[j] = (s[i + j] == 'B') ? rgb[j - 1] : rgb[j - 1] + 1;
                } else if ((j + 1) % 3 == 0) {
                    rgb[j] = (s[i + j] == 'R') ? rgb[j - 1] : rgb[j - 1] + 1;
                }
            }
            result = min(result, rgb[j - 1]);
        }

        for (int i = 0; i < n - k + 1; i++) {
            int j;
            for (j = 0; j < k; j++) {
                if (j == 0) rgb[j] = (s[i + j] == 'B') ? 0 : 1;
                else if ((j + 1) % 3 == 1) {
                    rgb[j] = (s[i + j] == 'B') ? rgb[j - 1] : rgb[j - 1] + 1;
                } else if ((j + 1) % 3 == 2) {
                    rgb[j] = (s[i + j] == 'R') ? rgb[j - 1] : rgb[j - 1] + 1;
                } else if ((j + 1) % 3 == 0) {
                    rgb[j] = (s[i + j] == 'G') ? rgb[j - 1] : rgb[j - 1] + 1;
                }
            }
            result = min(result, rgb[j - 1]);
        }
 
        printf("%d\n", result);
    }
}