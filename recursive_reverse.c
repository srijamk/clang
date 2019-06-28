#include <stdio.h>
#include <string.h>
#define MAX_LEN     100

void reverse(char s[], int i, int len) {

    if (i < len / 2) {
        char temp = s[i];
        s[i] = s[len - i - 1];
        s[len - i - 1] = temp;
        reverse(s, i + 1, len);

    }    

}

int main() {
    char s[MAX_LEN];
    scanf("%s", s);
    getchar();

    reverse(s, 0, strlen(s));
    printf("%s\n", s);
    
}