#include <stdio.h>

int main() {
    int n, i, j, k;
    i = k = 0;
    scanf("%d", &n);    
    int seq[n];
    char result[n];
    int nums[n];

    for (i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    i = 0;
    j = n - 1;
    while (i <= j) {
        
        if (i == j) {
            if (nums[i] > seq[k - 1]) {
                result[k++] = 'L';
                break;
            }
        } else if (nums[i] == nums[j]) {
            int curI = i;
            int curJ = j;
            while (curI <= curJ && (nums[curI] == nums[curJ])) {
                curI++;
                curJ--;
                printf("%d %d\n", nums[curI], nums[curJ]);
            }
            if (curI > curJ) {
                printf("%d %d\n", curI, curJ);
                result[k++] = 'L';
                break;
            } else {
                if (nums[curI] < nums[curJ]) {
                    result[k] = 'L';
                    seq[k++] = nums[i];
                    i++;
                } else {
                    result[k] = 'R';
                    seq[k++] = nums[j];
                    j--;
                }
            }
        }
        if (k == 0) {
            
            if (nums[i] < nums[j]) {
                result[k] = 'L';
                seq[k++] = nums[i];
                i++;
            } else {
                result[k] = 'R';
                seq[k++] = nums[j];
                j--;
            }
        } else {
            if (nums[i] <= seq[k - 1]) {
                if (nums[j] <= seq[k - 1]) {
                    break;
                } else {
                    result[k] = 'R';
                    seq[k++] = nums[j];
                    j--;
                }
            } else {
                if (nums[j] > seq[k - 1]) {
                    if (nums[i] < nums[j]) {
                        result[k] = 'L';
                        seq[k++] = nums[i];
                        i++;
                    } else {
                        result[k] = 'R';
                        seq[k++] = nums[j];
                        j--;
                    }
                } else {
                    result[k] = 'L';
                    seq[k++] = nums[i];
                    i++;
                }
            }
        }
    }

    printf("%d\n", k);
    for (int i = 0; i < k; i++) {
        putchar(result[i]);
    }

    putchar('\n');
}