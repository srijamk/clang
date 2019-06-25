#include <stdio.h>
#define MAX_LENGTH      100

int main() {
    char s1[MAX_LENGTH], s2[MAX_LENGTH];
    int i, j, k = 0;
    
    scanf("%s", s1);
    while (s1[i] != '\0') {
        if (s1[i] == '-') {
            if (i > 0 && s1[i - 1] != '-' && s1[i + 1] != '-') {
                k = ((s1[i - 2] != '-') ? s1[i - 1] : s1[i - 1] + 1);
                while (k <= s1[i + 1]) {
                    s2[j++] = k++; 
                }
                i++;
            }
        }
        else if (s1[i + 1] != '-') {
            s2[j++] = s1[i];
        }
        i++;
    }   

    printf("%s\n", s2);
}