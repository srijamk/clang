#include <stdio.h>

int main() {
    unsigned long n, m, k, curIndex, cur, page, dec, ans, numRead;
    curIndex = dec = ans = numRead = 0;
    scanf("%ld %ld %ld", &n, &m, &k);
    getchar();
    int nums[m];
    scanf("%d", &nums[curIndex]);
    cur = nums[curIndex++];


    while (curIndex <= m) {
        nums[curIndex++] = cur;     // add number if start of new page

        cur -= dec;
        page = (cur % k == 0) ? (cur / k) : (cur / k + 1);
        printf("%lu %lu\n", cur+dec, page);
        int index = curIndex;
        while (cur != EOF) {
            scanf("%ld", &cur);
            if (cur == EOF) {
                curIndex++;
                break;
            }
            index++;

            if ((cur - dec) <= page * k) nums[curIndex++] = cur;
            else {
                printf("%lu\n", cur);
                break;
            }
        }
        dec += (index - curIndex) + 1;
        ans++;
        if (cur == EOF) break;
    }
    printf("%ld\n", ans);
} 