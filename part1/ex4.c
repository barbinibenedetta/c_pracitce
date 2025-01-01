#include <stdio.h>

int main() {
  double celsius;

  printf("Type a temperature in celsius to convert: ");
  scanf("%lf", &celsius);

  double fahr = 9.0 / 5.0 * celsius + 32.0;
  double kelvin = celsius + 273.15;

  printf("Your temperature is %lf in Fahrenheit and %lf in Kelvin", fahr, kelvin);

  return 0;
}