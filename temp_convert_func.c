#include <stdio.h>

int toCelsius(int fahr);

main() {

    int i, lower, upper, step;
    int celsius, fahr;

    lower = 0;
    upper = 300;
    step = 20;

    printf("Fahrenheit\tCelsius\n");

    while (lower <= upper) {
        fahr = lower;
        printf("%d\t\t%d\n", fahr, toCelsius(fahr));
        lower += step;
    }
}

int toCelsius(int fahr) {
    return 5 * (fahr - 32) / 9;
}
