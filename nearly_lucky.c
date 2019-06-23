#include <stdio.h>

int main() {
    int result = 0;
    char line[20];
    scanf("%s", line);

    for (int i = 0; line[i] != '\0'; i++) {
        result += ((line[i] == '4' || line[i] == '7') ? 1 : 0);
    }

    printf((result == 4 || result == 7) ? "YES\n" : "NO\n");
}