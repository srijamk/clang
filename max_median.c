#include <stdio.h>
#include <stdlib.h>

#define MAX     111111
int arr[MAX];

int comparator (const void *a, const void *b) {
    int x = *(int *) a;
    int y = *(int *) b;
    return x - y;
}

int main() {
    int n, k;
    
    scanf("%d %d", &n, &k);

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    qsort(arr, n, sizeof(int), comparator);

    for (int i = 1; i <= k; i++) {
        for (int j = n / 2; j < n; j++) {
            if (j == n - 1 || arr[j] < arr[j + 1]) {
                arr[j]++;
                break;
            }
        }
    }

    printf("%d\n", arr[n / 2]);

    //for (int i = 0; i < n; i++) {
    //    printf("%d ", arr[i]);
    //}
    //putchar('\n');
}