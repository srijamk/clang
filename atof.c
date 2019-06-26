#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX_LINE    100

double atof(char s[]) {
    int i, sign; 
    double result, power;
    i = 0;
    
    sign = (s[i] == '-') ? -1 : 1;
    if (s[i] == '+' || s[i] == '-') {
        i++;
    }
    for (result = 0; isdigit(s[i]); i++) {
        result = (10 * result) + (s[i] - '0');
    }
    if (s[i] == '.') {
        i++;
    }
    for (power = 1.0; isdigit(s[i]); i++) {
        result = (10 * result) + (s[i] - '0');
        power *= 10.0;
    }
    return sign * result / power;
}

int main() {
    char s[MAX_LINE];
    fgets(s, sizeof s, stdin);
    printf("%f\n", atof(s));
}