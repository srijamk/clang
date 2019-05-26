#include <stdio.h>

int main()
{
  int celsius;
  float fahr;

  printf("Enter a temperature in Celsius: ");
  scanf("%d", &celsius);
  getchar();

  fahr = (9.0 / 5) * (float)celsius + 32;
  printf("%.2d degrees C converted to Fahrenheit is %.2f.\n degrees F", celsius, fahr);
}