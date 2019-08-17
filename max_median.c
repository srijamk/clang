#include <stdio.h>
#include <stdlib.h>

#define MAX     10000000
long long arr[MAX];

int compare (const void * a, const void * b)
{
    if (*(long long int *) a - *(long long int *) b < 0)
        return -1;
    if (* (long long int *) a - *(long long int *) b > 0)
        return 1;

    return 0;
}

int main() {
    int n, k;
    
    scanf("%d %d", &n, &k);

    for (int i = 0; i < n; i++) {
        scanf("%lld", &arr[i]);

    }
    
    qsort(arr, n, sizeof(long long), compare);


    int index = n / 2;
    long long num = arr[index];
    int numInc = 1;
    long long inc = arr[index + 1] - arr[index];

    if (inc > k) {
        printf("%lld\n", num + k);
    } else {

        while (inc <= k) {
            if (index == n - 1) {
                num += (k / numInc);
                break;
            }
            inc += numInc * (arr[index + 1] - num);
            num = arr[index + 1];
            numInc++;
            index++;
        }

        printf("%lld\n", num);
    }

}