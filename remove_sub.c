#include <stdio.h>
#include <string.h>

#define MAX     210

int maxN(int a, int b) {
    return (a > b) ? a : b;
}

int main() {
    char s[MAX], t[MAX];
    int slen, tlen;
    scanf("%s", s);
    scanf("%s", t);
    slen = strlen(s);
    tlen = strlen(t);

    // start
    int i, j = 0;
    int startMax, hasStarted = 0;
    for (; i < slen; i++) {
        if ((hasStarted == 0) && (s[i] == t[j])) {
            hasStarted = 1;
            j++;
            startMax = i;
        } else if (hasStarted && (s[i] == t[j])) j++;
        
        if (j >= tlen) break;
    }
    
    startMax = (startMax > (slen - i - 1)) ? startMax : (slen - i - 1);

    i = slen - 1;
    j = tlen - 1;
    int endMax = 0;
    hasStarted = 0;

    for (; i >= 0; i--) {
        if ((hasStarted == 0) && (s[i] == t[j])) {
            hasStarted = 1;
            j--;
            endMax = slen - i - 1;
        } else if (hasStarted && (s[i] == t[j])) j--;

        if (j < 0) break;
    }

    endMax = (endMax > i) ? endMax : i;

    int lo = 0;
    int lastLo = 0;
    int hi = slen - 1;
    int lastHi = slen - 1;
    int max = 0;
    j = 0;
    int k = tlen - 1;
    int l = 0;
    int m = tlen - 1;
    
    int lst[MAX] = {0};

    while (lo <= hi && j <= k) {
        if (s[lo] == t[j]) {
            lst[l++] = lo;
            j++;
        }

        if (j > k) break;

        if (s[hi] == t[k]) {
            lst[m--] = hi;
            k--;
        }

        if (j > k) break;

        lo++;
        hi--;
    }

    for (int a = 0; a < tlen - 1; a++) {
        max = (max > (lst[a + 1] - lst[a])) ? max : lst[a + 1] - lst[a];
    }

    printf("%d\n", maxN(endMax, maxN(max - 1, startMax)));
}