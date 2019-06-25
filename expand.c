#include <stdio.h>

int main() {
    char s1[100], s2[100];
    int i, j = 0;
    
    scanf("%s", s1);
    while (s1[i] != '\0') {
        if (s1[i] == '-') {
            if (i > 0 && s1[i - 1] != '-' && s1[i + 1] != '-') {
                for (int k = s1[i - 1]; k <= s1[i + 1]; k++) {
                    s2[j++] = k; 
                }
                i += 2;
            }
            else
                i++;
        }
        else if (s1[i + 1] != '-') {
            s2[j++] = s1[i];
            i++;
        }
        else
            i++;
    }   

    printf("%s\n", s2);
}