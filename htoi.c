#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int htoi(char s[]) {
    int result, cur = 0;

    for (int i = strlen(s) - 1; i >= 0; i--) {
        (isdigit(s[i])) && (result += pow(16, cur) * (s[i] - '0'));
        if (!isdigit(s[i])) {
            if (s[i] >= 'a' && s[i] <= 'z')
                result += pow(16, cur) * (s[i] - 'a' + 10);
            else
                result += pow(16, cur) * (s[i] - 'A' + 10);
        }
        cur++;
    }
    return result;
}

int main() {
   // 0 - 9 converts to 0 - 9
   // a - f and A - F converts to 10 - 15
    char line[100];
    scanf("%s", line);
    printf("%d\n", htoi(line));
}