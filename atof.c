#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

#define MAX_LINE    100

double atof(char s[]) {
    int i, sign, sci_not, sci_sign; 
    double result, power;
    i = sci_not = 0;
    
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
    
    if (s[i] == 'e' || s[i] == 'E') {
        i++;
    }

    if (s[i] == '-') {
        sci_sign = -1;
        i++;
    } else {
        sci_sign = 1;
    }

    for (i = i; isdigit(s[i]); i++) {
        sci_not = (10 * sci_not) + (s[i] - '0');
    }

    return (sign * result / power) * pow(10, sci_sign * sci_not);
}

int main() {
    char s[MAX_LINE];
    fgets(s, sizeof s, stdin);
    printf("%f\n", atof(s));
}