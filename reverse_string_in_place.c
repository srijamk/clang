#include <stdio.h>
#include <string.h>

char* reverse(char a[], int index) {
    if (strlen(a) <= 1 || index >= strlen(a) / 2) return a;
    else {
        char temp = a[strlen(a) - index - 1];
        a[strlen(a) - index - 1] = a[index];
        a[index] = temp;
        return reverse(a, index + 1);
    }
}

int main() {
    int n;
    scanf("%d", &n);
    char str[n];
    scanf("%s", str);
    printf("%s\n", reverse(str, 0));

}