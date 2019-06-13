#include <stdio.h>

int main() {
    int n, k, min_score, count;
    count = 0;
    scanf("%d %d", &n, &k);
    int arr[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    min_score = arr[k - 1];

    for (int i = 0; i < n; i++) {
        if (arr[i] >= min_score && arr[i] > 0) {
            count++;
        } else {
            break;
        }
    }

    printf("%d\n", count);
}
