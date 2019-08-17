#include <stdio.h>

#define MAX     111

int main() {
    int n;
    int arr[MAX];
    int numOdd, result;

    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        numOdd += arr[i] % 2;
    } 

    if (numOdd > 1) {
        for (int i = 0; i < n; i++) {
            if (arr[i] % 2 == 0) {
                result = i + 1;
                break;
            }
        }
    } else {
        for (int i = 0; i < n; i++) {
            if (arr[i] % 2 == 1) {
                result = i + 1;
                break;
            }
        }
    }

    printf("%d\n", result);
}